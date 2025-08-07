// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READNUMGROUPBYCLASSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READNUMGROUPBYCLASSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadNumGroupByClassResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadNumGroupByClassResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClassId, classId_);
      DARABONBA_PTR_TO_JSON(MsgCount, msgCount_);
    };
    friend void from_json(const Darabonba::Json& j, ReadNumGroupByClassResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassId, classId_);
      DARABONBA_PTR_FROM_JSON(MsgCount, msgCount_);
    };
    ReadNumGroupByClassResponseBodyData() = default ;
    ReadNumGroupByClassResponseBodyData(const ReadNumGroupByClassResponseBodyData &) = default ;
    ReadNumGroupByClassResponseBodyData(ReadNumGroupByClassResponseBodyData &&) = default ;
    ReadNumGroupByClassResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadNumGroupByClassResponseBodyData() = default ;
    ReadNumGroupByClassResponseBodyData& operator=(const ReadNumGroupByClassResponseBodyData &) = default ;
    ReadNumGroupByClassResponseBodyData& operator=(ReadNumGroupByClassResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classId_ != nullptr
        && this->msgCount_ != nullptr; };
    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline int64_t classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
    inline ReadNumGroupByClassResponseBodyData& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // msgCount Field Functions 
    bool hasMsgCount() const { return this->msgCount_ != nullptr;};
    void deleteMsgCount() { this->msgCount_ = nullptr;};
    inline int64_t msgCount() const { DARABONBA_PTR_GET_DEFAULT(msgCount_, 0L) };
    inline ReadNumGroupByClassResponseBodyData& setMsgCount(int64_t msgCount) { DARABONBA_PTR_SET_VALUE(msgCount_, msgCount) };


  protected:
    std::shared_ptr<int64_t> classId_ = nullptr;
    std::shared_ptr<int64_t> msgCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
