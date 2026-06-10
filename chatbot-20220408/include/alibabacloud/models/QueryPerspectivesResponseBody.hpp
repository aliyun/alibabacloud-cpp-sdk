// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPERSPECTIVESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPERSPECTIVESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class QueryPerspectivesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPerspectivesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Perspectives, perspectives_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPerspectivesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Perspectives, perspectives_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPerspectivesResponseBody() = default ;
    QueryPerspectivesResponseBody(const QueryPerspectivesResponseBody &) = default ;
    QueryPerspectivesResponseBody(QueryPerspectivesResponseBody &&) = default ;
    QueryPerspectivesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPerspectivesResponseBody() = default ;
    QueryPerspectivesResponseBody& operator=(const QueryPerspectivesResponseBody &) = default ;
    QueryPerspectivesResponseBody& operator=(QueryPerspectivesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Perspectives : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Perspectives& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PerspectiveCode, perspectiveCode_);
        DARABONBA_PTR_TO_JSON(PerspectiveId, perspectiveId_);
        DARABONBA_PTR_TO_JSON(SelfDefine, selfDefine_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Perspectives& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PerspectiveCode, perspectiveCode_);
        DARABONBA_PTR_FROM_JSON(PerspectiveId, perspectiveId_);
        DARABONBA_PTR_FROM_JSON(SelfDefine, selfDefine_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Perspectives() = default ;
      Perspectives(const Perspectives &) = default ;
      Perspectives(Perspectives &&) = default ;
      Perspectives(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Perspectives() = default ;
      Perspectives& operator=(const Perspectives &) = default ;
      Perspectives& operator=(Perspectives &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->perspectiveCode_ == nullptr && this->perspectiveId_ == nullptr && this->selfDefine_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Perspectives& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Perspectives& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Perspectives& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // perspectiveCode Field Functions 
      bool hasPerspectiveCode() const { return this->perspectiveCode_ != nullptr;};
      void deletePerspectiveCode() { this->perspectiveCode_ = nullptr;};
      inline string getPerspectiveCode() const { DARABONBA_PTR_GET_DEFAULT(perspectiveCode_, "") };
      inline Perspectives& setPerspectiveCode(string perspectiveCode) { DARABONBA_PTR_SET_VALUE(perspectiveCode_, perspectiveCode) };


      // perspectiveId Field Functions 
      bool hasPerspectiveId() const { return this->perspectiveId_ != nullptr;};
      void deletePerspectiveId() { this->perspectiveId_ = nullptr;};
      inline string getPerspectiveId() const { DARABONBA_PTR_GET_DEFAULT(perspectiveId_, "") };
      inline Perspectives& setPerspectiveId(string perspectiveId) { DARABONBA_PTR_SET_VALUE(perspectiveId_, perspectiveId) };


      // selfDefine Field Functions 
      bool hasSelfDefine() const { return this->selfDefine_ != nullptr;};
      void deleteSelfDefine() { this->selfDefine_ = nullptr;};
      inline bool getSelfDefine() const { DARABONBA_PTR_GET_DEFAULT(selfDefine_, false) };
      inline Perspectives& setSelfDefine(bool selfDefine) { DARABONBA_PTR_SET_VALUE(selfDefine_, selfDefine) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Perspectives& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The creation time in UTC.
      shared_ptr<string> createTime_ {};
      // The modification time in UTC.
      shared_ptr<string> modifyTime_ {};
      // The perspective name.
      shared_ptr<string> name_ {};
      // The perspective code (used for the Q\\&A API).
      shared_ptr<string> perspectiveCode_ {};
      // The perspective ID.
      shared_ptr<string> perspectiveId_ {};
      // Indicates whether the perspective is custom-defined.
      shared_ptr<bool> selfDefine_ {};
      // The status of the perspective. Valid values are 3 (enabled) and 1 (disabled).
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->perspectives_ == nullptr
        && this->requestId_ == nullptr; };
    // perspectives Field Functions 
    bool hasPerspectives() const { return this->perspectives_ != nullptr;};
    void deletePerspectives() { this->perspectives_ = nullptr;};
    inline const vector<QueryPerspectivesResponseBody::Perspectives> & getPerspectives() const { DARABONBA_PTR_GET_CONST(perspectives_, vector<QueryPerspectivesResponseBody::Perspectives>) };
    inline vector<QueryPerspectivesResponseBody::Perspectives> getPerspectives() { DARABONBA_PTR_GET(perspectives_, vector<QueryPerspectivesResponseBody::Perspectives>) };
    inline QueryPerspectivesResponseBody& setPerspectives(const vector<QueryPerspectivesResponseBody::Perspectives> & perspectives) { DARABONBA_PTR_SET_VALUE(perspectives_, perspectives) };
    inline QueryPerspectivesResponseBody& setPerspectives(vector<QueryPerspectivesResponseBody::Perspectives> && perspectives) { DARABONBA_PTR_SET_RVALUE(perspectives_, perspectives) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPerspectivesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of perspectives.
    shared_ptr<vector<QueryPerspectivesResponseBody::Perspectives>> perspectives_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
