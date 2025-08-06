// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODYCREATEDBY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODYCREATEDBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableRecordResponseBodyCreatedBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableRecordResponseBodyCreatedBy& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableRecordResponseBodyCreatedBy& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMultiDimTableRecordResponseBodyCreatedBy() = default ;
    GetMultiDimTableRecordResponseBodyCreatedBy(const GetMultiDimTableRecordResponseBodyCreatedBy &) = default ;
    GetMultiDimTableRecordResponseBodyCreatedBy(GetMultiDimTableRecordResponseBodyCreatedBy &&) = default ;
    GetMultiDimTableRecordResponseBodyCreatedBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableRecordResponseBodyCreatedBy() = default ;
    GetMultiDimTableRecordResponseBodyCreatedBy& operator=(const GetMultiDimTableRecordResponseBodyCreatedBy &) = default ;
    GetMultiDimTableRecordResponseBodyCreatedBy& operator=(GetMultiDimTableRecordResponseBodyCreatedBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMultiDimTableRecordResponseBodyCreatedBy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
