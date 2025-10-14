// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class MountInstanceSDGResponseBodyDataResultFailedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MountInstanceSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, MountInstanceSDGResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    MountInstanceSDGResponseBodyDataResultFailedItems() = default ;
    MountInstanceSDGResponseBodyDataResultFailedItems(const MountInstanceSDGResponseBodyDataResultFailedItems &) = default ;
    MountInstanceSDGResponseBodyDataResultFailedItems(MountInstanceSDGResponseBodyDataResultFailedItems &&) = default ;
    MountInstanceSDGResponseBodyDataResultFailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MountInstanceSDGResponseBodyDataResultFailedItems() = default ;
    MountInstanceSDGResponseBodyDataResultFailedItems& operator=(const MountInstanceSDGResponseBodyDataResultFailedItems &) = default ;
    MountInstanceSDGResponseBodyDataResultFailedItems& operator=(MountInstanceSDGResponseBodyDataResultFailedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMessage_ == nullptr
        && return this->instanceId_ == nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline MountInstanceSDGResponseBodyDataResultFailedItems& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MountInstanceSDGResponseBodyDataResultFailedItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
