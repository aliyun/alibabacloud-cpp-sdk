// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMFIELDOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMFIELDOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCustomFieldOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomFieldOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomFieldOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    GetCustomFieldOptionRequest() = default ;
    GetCustomFieldOptionRequest(const GetCustomFieldOptionRequest &) = default ;
    GetCustomFieldOptionRequest(GetCustomFieldOptionRequest &&) = default ;
    GetCustomFieldOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomFieldOptionRequest() = default ;
    GetCustomFieldOptionRequest& operator=(const GetCustomFieldOptionRequest &) = default ;
    GetCustomFieldOptionRequest& operator=(GetCustomFieldOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spaceIdentifier_ == nullptr
        && return this->spaceType_ == nullptr && return this->workitemTypeIdentifier_ == nullptr; };
    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetCustomFieldOptionRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline GetCustomFieldOptionRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // workitemTypeIdentifier Field Functions 
    bool hasWorkitemTypeIdentifier() const { return this->workitemTypeIdentifier_ != nullptr;};
    void deleteWorkitemTypeIdentifier() { this->workitemTypeIdentifier_ = nullptr;};
    inline string workitemTypeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemTypeIdentifier_, "") };
    inline GetCustomFieldOptionRequest& setWorkitemTypeIdentifier(string workitemTypeIdentifier) { DARABONBA_PTR_SET_VALUE(workitemTypeIdentifier_, workitemTypeIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemTypeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
