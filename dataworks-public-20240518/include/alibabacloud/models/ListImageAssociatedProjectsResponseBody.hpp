// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEASSOCIATEDPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEASSOCIATEDPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListImageAssociatedProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageAssociatedProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageAssociatedProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageAssociatedProjectsResponseBody() = default ;
    ListImageAssociatedProjectsResponseBody(const ListImageAssociatedProjectsResponseBody &) = default ;
    ListImageAssociatedProjectsResponseBody(ListImageAssociatedProjectsResponseBody &&) = default ;
    ListImageAssociatedProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageAssociatedProjectsResponseBody() = default ;
    ListImageAssociatedProjectsResponseBody& operator=(const ListImageAssociatedProjectsResponseBody &) = default ;
    ListImageAssociatedProjectsResponseBody& operator=(ListImageAssociatedProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
    inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
    inline ListImageAssociatedProjectsResponseBody& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListImageAssociatedProjectsResponseBody& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageAssociatedProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageAssociatedProjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<int64_t>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
