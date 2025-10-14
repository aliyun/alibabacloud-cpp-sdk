// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODYLASTMODIFIEDBY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODYLASTMODIFIEDBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableRecordResponseBodyLastModifiedBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableRecordResponseBodyLastModifiedBy& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableRecordResponseBodyLastModifiedBy& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMultiDimTableRecordResponseBodyLastModifiedBy() = default ;
    GetMultiDimTableRecordResponseBodyLastModifiedBy(const GetMultiDimTableRecordResponseBodyLastModifiedBy &) = default ;
    GetMultiDimTableRecordResponseBodyLastModifiedBy(GetMultiDimTableRecordResponseBodyLastModifiedBy &&) = default ;
    GetMultiDimTableRecordResponseBodyLastModifiedBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableRecordResponseBodyLastModifiedBy() = default ;
    GetMultiDimTableRecordResponseBodyLastModifiedBy& operator=(const GetMultiDimTableRecordResponseBodyLastModifiedBy &) = default ;
    GetMultiDimTableRecordResponseBodyLastModifiedBy& operator=(GetMultiDimTableRecordResponseBodyLastModifiedBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMultiDimTableRecordResponseBodyLastModifiedBy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
