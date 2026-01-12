// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListProjectsByDependencyIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsByDependencyIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyProjectId, dependencyProjectId_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(MapUuid, mapUuid_);
      DARABONBA_PTR_TO_JSON(WithDataset, withDataset_);
      DARABONBA_PTR_TO_JSON(WithSource, withSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsByDependencyIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyProjectId, dependencyProjectId_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(MapUuid, mapUuid_);
      DARABONBA_PTR_FROM_JSON(WithDataset, withDataset_);
      DARABONBA_PTR_FROM_JSON(WithSource, withSource_);
    };
    ListProjectsByDependencyIdRequest() = default ;
    ListProjectsByDependencyIdRequest(const ListProjectsByDependencyIdRequest &) = default ;
    ListProjectsByDependencyIdRequest(ListProjectsByDependencyIdRequest &&) = default ;
    ListProjectsByDependencyIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsByDependencyIdRequest() = default ;
    ListProjectsByDependencyIdRequest& operator=(const ListProjectsByDependencyIdRequest &) = default ;
    ListProjectsByDependencyIdRequest& operator=(ListProjectsByDependencyIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependencyProjectId_ == nullptr
        && this->jwtToken_ == nullptr && this->mapUuid_ == nullptr && this->withDataset_ == nullptr && this->withSource_ == nullptr; };
    // dependencyProjectId Field Functions 
    bool hasDependencyProjectId() const { return this->dependencyProjectId_ != nullptr;};
    void deleteDependencyProjectId() { this->dependencyProjectId_ = nullptr;};
    inline int64_t getDependencyProjectId() const { DARABONBA_PTR_GET_DEFAULT(dependencyProjectId_, 0L) };
    inline ListProjectsByDependencyIdRequest& setDependencyProjectId(int64_t dependencyProjectId) { DARABONBA_PTR_SET_VALUE(dependencyProjectId_, dependencyProjectId) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ListProjectsByDependencyIdRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapUuid Field Functions 
    bool hasMapUuid() const { return this->mapUuid_ != nullptr;};
    void deleteMapUuid() { this->mapUuid_ = nullptr;};
    inline string getMapUuid() const { DARABONBA_PTR_GET_DEFAULT(mapUuid_, "") };
    inline ListProjectsByDependencyIdRequest& setMapUuid(string mapUuid) { DARABONBA_PTR_SET_VALUE(mapUuid_, mapUuid) };


    // withDataset Field Functions 
    bool hasWithDataset() const { return this->withDataset_ != nullptr;};
    void deleteWithDataset() { this->withDataset_ = nullptr;};
    inline bool getWithDataset() const { DARABONBA_PTR_GET_DEFAULT(withDataset_, false) };
    inline ListProjectsByDependencyIdRequest& setWithDataset(bool withDataset) { DARABONBA_PTR_SET_VALUE(withDataset_, withDataset) };


    // withSource Field Functions 
    bool hasWithSource() const { return this->withSource_ != nullptr;};
    void deleteWithSource() { this->withSource_ = nullptr;};
    inline bool getWithSource() const { DARABONBA_PTR_GET_DEFAULT(withSource_, false) };
    inline ListProjectsByDependencyIdRequest& setWithSource(bool withSource) { DARABONBA_PTR_SET_VALUE(withSource_, withSource) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> dependencyProjectId_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> mapUuid_ {};
    // This parameter is required.
    shared_ptr<bool> withDataset_ {};
    // This parameter is required.
    shared_ptr<bool> withSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
