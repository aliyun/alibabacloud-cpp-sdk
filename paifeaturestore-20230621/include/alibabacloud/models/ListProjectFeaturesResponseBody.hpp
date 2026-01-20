// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProjectFeaturesResponseBody() = default ;
    ListProjectFeaturesResponseBody(const ListProjectFeaturesResponseBody &) = default ;
    ListProjectFeaturesResponseBody(ListProjectFeaturesResponseBody &&) = default ;
    ListProjectFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeaturesResponseBody() = default ;
    ListProjectFeaturesResponseBody& operator=(const ListProjectFeaturesResponseBody &) = default ;
    ListProjectFeaturesResponseBody& operator=(ListProjectFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(AliasNames, aliasNames_);
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(ModelFeatureCount, modelFeatureCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasNames, aliasNames_);
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(ModelFeatureCount, modelFeatureCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Features() = default ;
      Features(const Features &) = default ;
      Features(Features &&) = default ;
      Features(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Features() = default ;
      Features& operator=(const Features &) = default ;
      Features& operator=(Features &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasNames_ == nullptr
        && this->featureViewId_ == nullptr && this->featureViewName_ == nullptr && this->gmtCreateTime_ == nullptr && this->modelFeatureCount_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->type_ == nullptr; };
      // aliasNames Field Functions 
      bool hasAliasNames() const { return this->aliasNames_ != nullptr;};
      void deleteAliasNames() { this->aliasNames_ = nullptr;};
      inline string getAliasNames() const { DARABONBA_PTR_GET_DEFAULT(aliasNames_, "") };
      inline Features& setAliasNames(string aliasNames) { DARABONBA_PTR_SET_VALUE(aliasNames_, aliasNames) };


      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline Features& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // featureViewName Field Functions 
      bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
      void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
      inline string getFeatureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
      inline Features& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Features& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // modelFeatureCount Field Functions 
      bool hasModelFeatureCount() const { return this->modelFeatureCount_ != nullptr;};
      void deleteModelFeatureCount() { this->modelFeatureCount_ = nullptr;};
      inline int32_t getModelFeatureCount() const { DARABONBA_PTR_GET_DEFAULT(modelFeatureCount_, 0) };
      inline Features& setModelFeatureCount(int32_t modelFeatureCount) { DARABONBA_PTR_SET_VALUE(modelFeatureCount_, modelFeatureCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Features& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> aliasNames_ {};
      shared_ptr<string> featureViewId_ {};
      shared_ptr<string> featureViewName_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<int32_t> modelFeatureCount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->features_ == nullptr
        && this->totalCount_ == nullptr && this->requestId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<ListProjectFeaturesResponseBody::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<ListProjectFeaturesResponseBody::Features>) };
    inline vector<ListProjectFeaturesResponseBody::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<ListProjectFeaturesResponseBody::Features>) };
    inline ListProjectFeaturesResponseBody& setFeatures(const vector<ListProjectFeaturesResponseBody::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListProjectFeaturesResponseBody& setFeatures(vector<ListProjectFeaturesResponseBody::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectFeaturesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListProjectFeaturesResponseBody::Features>> features_ {};
    shared_ptr<int32_t> totalCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
