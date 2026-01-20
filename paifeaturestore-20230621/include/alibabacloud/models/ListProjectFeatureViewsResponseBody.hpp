// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODY_HPP_
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
  class ListProjectFeatureViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectFeatureViewsResponseBody() = default ;
    ListProjectFeatureViewsResponseBody(const ListProjectFeatureViewsResponseBody &) = default ;
    ListProjectFeatureViewsResponseBody(ListProjectFeatureViewsResponseBody &&) = default ;
    ListProjectFeatureViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeatureViewsResponseBody() = default ;
    ListProjectFeatureViewsResponseBody& operator=(const ListProjectFeatureViewsResponseBody &) = default ;
    ListProjectFeatureViewsResponseBody& operator=(ListProjectFeatureViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FeatureViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeatureViews& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(JoinId, joinId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentJoinId, parentJoinId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FeatureViews& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentJoinId, parentJoinId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      FeatureViews() = default ;
      FeatureViews(const FeatureViews &) = default ;
      FeatureViews(FeatureViews &&) = default ;
      FeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeatureViews() = default ;
      FeatureViews& operator=(const FeatureViews &) = default ;
      FeatureViews& operator=(FeatureViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Features : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Features& obj) { 
          DARABONBA_PTR_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Features& obj) { 
          DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline const vector<string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
        inline vector<string> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
        inline Features& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
        inline Features& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> attributes_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->featureViewId_ == nullptr
        && this->features_ == nullptr && this->joinId_ == nullptr && this->name_ == nullptr && this->parentJoinId_ == nullptr && this->type_ == nullptr; };
      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline FeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<FeatureViews::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<FeatureViews::Features>) };
      inline vector<FeatureViews::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<FeatureViews::Features>) };
      inline FeatureViews& setFeatures(const vector<FeatureViews::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline FeatureViews& setFeatures(vector<FeatureViews::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // joinId Field Functions 
      bool hasJoinId() const { return this->joinId_ != nullptr;};
      void deleteJoinId() { this->joinId_ = nullptr;};
      inline string getJoinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
      inline FeatureViews& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentJoinId Field Functions 
      bool hasParentJoinId() const { return this->parentJoinId_ != nullptr;};
      void deleteParentJoinId() { this->parentJoinId_ = nullptr;};
      inline string getParentJoinId() const { DARABONBA_PTR_GET_DEFAULT(parentJoinId_, "") };
      inline FeatureViews& setParentJoinId(string parentJoinId) { DARABONBA_PTR_SET_VALUE(parentJoinId_, parentJoinId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> featureViewId_ {};
      shared_ptr<vector<FeatureViews::Features>> features_ {};
      shared_ptr<string> joinId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentJoinId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->featureViews_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // featureViews Field Functions 
    bool hasFeatureViews() const { return this->featureViews_ != nullptr;};
    void deleteFeatureViews() { this->featureViews_ = nullptr;};
    inline const vector<ListProjectFeatureViewsResponseBody::FeatureViews> & getFeatureViews() const { DARABONBA_PTR_GET_CONST(featureViews_, vector<ListProjectFeatureViewsResponseBody::FeatureViews>) };
    inline vector<ListProjectFeatureViewsResponseBody::FeatureViews> getFeatureViews() { DARABONBA_PTR_GET(featureViews_, vector<ListProjectFeatureViewsResponseBody::FeatureViews>) };
    inline ListProjectFeatureViewsResponseBody& setFeatureViews(const vector<ListProjectFeatureViewsResponseBody::FeatureViews> & featureViews) { DARABONBA_PTR_SET_VALUE(featureViews_, featureViews) };
    inline ListProjectFeatureViewsResponseBody& setFeatureViews(vector<ListProjectFeatureViewsResponseBody::FeatureViews> && featureViews) { DARABONBA_PTR_SET_RVALUE(featureViews_, featureViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectFeatureViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListProjectFeatureViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListProjectFeatureViewsResponseBody::FeatureViews>> featureViews_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
