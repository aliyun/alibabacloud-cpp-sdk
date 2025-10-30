// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILREQUESTSUBMITDETAILQUERY_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILREQUESTSUBMITDETAILQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailRequestSubmitDetailQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailRequestSubmitDetailQuery& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailRequestSubmitDetailQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    GetLatestSubmitDetailRequestSubmitDetailQuery() = default ;
    GetLatestSubmitDetailRequestSubmitDetailQuery(const GetLatestSubmitDetailRequestSubmitDetailQuery &) = default ;
    GetLatestSubmitDetailRequestSubmitDetailQuery(GetLatestSubmitDetailRequestSubmitDetailQuery &&) = default ;
    GetLatestSubmitDetailRequestSubmitDetailQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailRequestSubmitDetailQuery() = default ;
    GetLatestSubmitDetailRequestSubmitDetailQuery& operator=(const GetLatestSubmitDetailRequestSubmitDetailQuery &) = default ;
    GetLatestSubmitDetailRequestSubmitDetailQuery& operator=(GetLatestSubmitDetailRequestSubmitDetailQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectId_ == nullptr
        && return this->objectType_ == nullptr; };
    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline GetLatestSubmitDetailRequestSubmitDetailQuery& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetLatestSubmitDetailRequestSubmitDetailQuery& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> objectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
