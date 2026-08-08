// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKRESOURCECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKRESOURCECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class PrecheckResourceCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckResourceCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagResourceMatchers, tagResourceMatchers_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckResourceCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagResourceMatchers, tagResourceMatchers_);
    };
    PrecheckResourceCountRequest() = default ;
    PrecheckResourceCountRequest(const PrecheckResourceCountRequest &) = default ;
    PrecheckResourceCountRequest(PrecheckResourceCountRequest &&) = default ;
    PrecheckResourceCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckResourceCountRequest() = default ;
    PrecheckResourceCountRequest& operator=(const PrecheckResourceCountRequest &) = default ;
    PrecheckResourceCountRequest& operator=(PrecheckResourceCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagResourceMatchers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagResourceMatchers& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, TagResourceMatchers& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      TagResourceMatchers() = default ;
      TagResourceMatchers(const TagResourceMatchers &) = default ;
      TagResourceMatchers(TagResourceMatchers &&) = default ;
      TagResourceMatchers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagResourceMatchers() = default ;
      TagResourceMatchers& operator=(const TagResourceMatchers &) = default ;
      TagResourceMatchers& operator=(TagResourceMatchers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagResourceMatchers& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline TagResourceMatchers& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline TagResourceMatchers& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline TagResourceMatchers& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // This parameter is required.
      shared_ptr<string> key_ {};
      // This parameter is required.
      shared_ptr<string> operator_ {};
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->tagResourceMatchers_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PrecheckResourceCountRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagResourceMatchers Field Functions 
    bool hasTagResourceMatchers() const { return this->tagResourceMatchers_ != nullptr;};
    void deleteTagResourceMatchers() { this->tagResourceMatchers_ = nullptr;};
    inline const vector<PrecheckResourceCountRequest::TagResourceMatchers> & getTagResourceMatchers() const { DARABONBA_PTR_GET_CONST(tagResourceMatchers_, vector<PrecheckResourceCountRequest::TagResourceMatchers>) };
    inline vector<PrecheckResourceCountRequest::TagResourceMatchers> getTagResourceMatchers() { DARABONBA_PTR_GET(tagResourceMatchers_, vector<PrecheckResourceCountRequest::TagResourceMatchers>) };
    inline PrecheckResourceCountRequest& setTagResourceMatchers(const vector<PrecheckResourceCountRequest::TagResourceMatchers> & tagResourceMatchers) { DARABONBA_PTR_SET_VALUE(tagResourceMatchers_, tagResourceMatchers) };
    inline PrecheckResourceCountRequest& setTagResourceMatchers(vector<PrecheckResourceCountRequest::TagResourceMatchers> && tagResourceMatchers) { DARABONBA_PTR_SET_RVALUE(tagResourceMatchers_, tagResourceMatchers) };


  protected:
    shared_ptr<string> resourceType_ {};
    // This parameter is required.
    shared_ptr<vector<PrecheckResourceCountRequest::TagResourceMatchers>> tagResourceMatchers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
