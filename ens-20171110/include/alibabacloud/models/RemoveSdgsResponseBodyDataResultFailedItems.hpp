// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODYDATARESULTFAILEDITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveSDGsResponseBodyDataResultFailedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGsResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGsResponseBodyDataResultFailedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RemoveSDGsResponseBodyDataResultFailedItems() = default ;
    RemoveSDGsResponseBodyDataResultFailedItems(const RemoveSDGsResponseBodyDataResultFailedItems &) = default ;
    RemoveSDGsResponseBodyDataResultFailedItems(RemoveSDGsResponseBodyDataResultFailedItems &&) = default ;
    RemoveSDGsResponseBodyDataResultFailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGsResponseBodyDataResultFailedItems() = default ;
    RemoveSDGsResponseBodyDataResultFailedItems& operator=(const RemoveSDGsResponseBodyDataResultFailedItems &) = default ;
    RemoveSDGsResponseBodyDataResultFailedItems& operator=(RemoveSDGsResponseBodyDataResultFailedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errMessage_ != nullptr
        && this->instanceId_ != nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline RemoveSDGsResponseBodyDataResultFailedItems& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveSDGsResponseBodyDataResultFailedItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
