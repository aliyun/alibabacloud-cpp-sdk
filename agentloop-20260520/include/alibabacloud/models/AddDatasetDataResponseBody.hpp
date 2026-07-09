// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class AddDatasetDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(affectedRows, affectedRows_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(affectedRows, affectedRows_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AddDatasetDataResponseBody() = default ;
    AddDatasetDataResponseBody(const AddDatasetDataResponseBody &) = default ;
    AddDatasetDataResponseBody(AddDatasetDataResponseBody &&) = default ;
    AddDatasetDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDataResponseBody() = default ;
    AddDatasetDataResponseBody& operator=(const AddDatasetDataResponseBody &) = default ;
    AddDatasetDataResponseBody& operator=(AddDatasetDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedRows_ == nullptr
        && this->requestId_ == nullptr; };
    // affectedRows Field Functions 
    bool hasAffectedRows() const { return this->affectedRows_ != nullptr;};
    void deleteAffectedRows() { this->affectedRows_ = nullptr;};
    inline int32_t getAffectedRows() const { DARABONBA_PTR_GET_DEFAULT(affectedRows_, 0) };
    inline AddDatasetDataResponseBody& setAffectedRows(int32_t affectedRows) { DARABONBA_PTR_SET_VALUE(affectedRows_, affectedRows) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDatasetDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of log rows scanned or processed.
    shared_ptr<int32_t> affectedRows_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
