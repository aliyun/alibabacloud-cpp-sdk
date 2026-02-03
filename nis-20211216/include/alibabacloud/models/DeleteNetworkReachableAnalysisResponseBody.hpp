// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNetworkReachableAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteNetworkReachableAnalysisResponseBody() = default ;
    DeleteNetworkReachableAnalysisResponseBody(const DeleteNetworkReachableAnalysisResponseBody &) = default ;
    DeleteNetworkReachableAnalysisResponseBody(DeleteNetworkReachableAnalysisResponseBody &&) = default ;
    DeleteNetworkReachableAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkReachableAnalysisResponseBody() = default ;
    DeleteNetworkReachableAnalysisResponseBody& operator=(const DeleteNetworkReachableAnalysisResponseBody &) = default ;
    DeleteNetworkReachableAnalysisResponseBody& operator=(DeleteNetworkReachableAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline DeleteNetworkReachableAnalysisResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteNetworkReachableAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Result of operation.
    // - **true**: Delete Success.
    // - **false**: Delete Fail.
    shared_ptr<bool> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
