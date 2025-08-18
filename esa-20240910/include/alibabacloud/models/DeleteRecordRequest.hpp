// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    DeleteRecordRequest() = default ;
    DeleteRecordRequest(const DeleteRecordRequest &) = default ;
    DeleteRecordRequest(DeleteRecordRequest &&) = default ;
    DeleteRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRecordRequest() = default ;
    DeleteRecordRequest& operator=(const DeleteRecordRequest &) = default ;
    DeleteRecordRequest& operator=(DeleteRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordId_ != nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DeleteRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    // The record ID, which can be obtained by calling [ListRecords](https://help.aliyun.com/document_detail/2850265.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> recordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
