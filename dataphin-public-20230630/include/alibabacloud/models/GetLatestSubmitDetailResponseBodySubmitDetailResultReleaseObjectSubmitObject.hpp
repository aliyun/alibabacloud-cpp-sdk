// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULTRELEASEOBJECTSUBMITOBJECT_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULTRELEASEOBJECTSUBMITOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject(const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject(GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject &&) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& operator=(const GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& operator=(GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objectId_ != nullptr
        && this->objectName_ != nullptr && this->objectType_ != nullptr; };
    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObjectSubmitObject& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectName_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
