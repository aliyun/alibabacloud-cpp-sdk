// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVscsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vscs, vscs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
    };
    DescribeVscsResponseBody() = default ;
    DescribeVscsResponseBody(const DescribeVscsResponseBody &) = default ;
    DescribeVscsResponseBody(DescribeVscsResponseBody &&) = default ;
    DescribeVscsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscsResponseBody() = default ;
    DescribeVscsResponseBody& operator=(const DescribeVscsResponseBody &) = default ;
    DescribeVscsResponseBody& operator=(DescribeVscsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vscs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vscs& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(VscName, vscName_);
        DARABONBA_PTR_TO_JSON(VscType, vscType_);
      };
      friend void from_json(const Darabonba::Json& j, Vscs& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(VscName, vscName_);
        DARABONBA_PTR_FROM_JSON(VscType, vscType_);
      };
      Vscs() = default ;
      Vscs(const Vscs &) = default ;
      Vscs(Vscs &&) = default ;
      Vscs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vscs() = default ;
      Vscs& operator=(const Vscs &) = default ;
      Vscs& operator=(Vscs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vscId_ == nullptr
        && this->vscName_ == nullptr && this->vscType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Vscs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Vscs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Vscs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Vscs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Vscs::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Vscs::Tags>) };
      inline vector<Vscs::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Vscs::Tags>) };
      inline Vscs& setTags(const vector<Vscs::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Vscs& setTags(vector<Vscs::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline Vscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // vscName Field Functions 
      bool hasVscName() const { return this->vscName_ != nullptr;};
      void deleteVscName() { this->vscName_ = nullptr;};
      inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
      inline Vscs& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


      // vscType Field Functions 
      bool hasVscType() const { return this->vscType_ != nullptr;};
      void deleteVscType() { this->vscType_ = nullptr;};
      inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
      inline Vscs& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Vscs::Tags>> tags_ {};
      // VSC ID。
      shared_ptr<string> vscId_ {};
      shared_ptr<string> vscName_ {};
      shared_ptr<string> vscType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->vscs_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVscsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVscsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vscs Field Functions 
    bool hasVscs() const { return this->vscs_ != nullptr;};
    void deleteVscs() { this->vscs_ = nullptr;};
    inline const vector<DescribeVscsResponseBody::Vscs> & getVscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<DescribeVscsResponseBody::Vscs>) };
    inline vector<DescribeVscsResponseBody::Vscs> getVscs() { DARABONBA_PTR_GET(vscs_, vector<DescribeVscsResponseBody::Vscs>) };
    inline DescribeVscsResponseBody& setVscs(const vector<DescribeVscsResponseBody::Vscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
    inline DescribeVscsResponseBody& setVscs(vector<DescribeVscsResponseBody::Vscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


  protected:
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // VSC
    shared_ptr<vector<DescribeVscsResponseBody::Vscs>> vscs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
