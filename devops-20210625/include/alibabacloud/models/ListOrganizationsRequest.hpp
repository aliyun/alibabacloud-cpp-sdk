// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListOrganizationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(minAccessLevel, minAccessLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(minAccessLevel, minAccessLevel_);
    };
    ListOrganizationsRequest() = default ;
    ListOrganizationsRequest(const ListOrganizationsRequest &) = default ;
    ListOrganizationsRequest(ListOrganizationsRequest &&) = default ;
    ListOrganizationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationsRequest() = default ;
    ListOrganizationsRequest& operator=(const ListOrganizationsRequest &) = default ;
    ListOrganizationsRequest& operator=(ListOrganizationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->accessToken_ == nullptr && return this->minAccessLevel_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline ListOrganizationsRequest& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListOrganizationsRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // minAccessLevel Field Functions 
    bool hasMinAccessLevel() const { return this->minAccessLevel_ != nullptr;};
    void deleteMinAccessLevel() { this->minAccessLevel_ = nullptr;};
    inline int32_t minAccessLevel() const { DARABONBA_PTR_GET_DEFAULT(minAccessLevel_, 0) };
    inline ListOrganizationsRequest& setMinAccessLevel(int32_t minAccessLevel) { DARABONBA_PTR_SET_VALUE(minAccessLevel_, minAccessLevel) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<int32_t> minAccessLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
