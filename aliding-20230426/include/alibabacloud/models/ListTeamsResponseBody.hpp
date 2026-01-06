// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTeamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(teams, teams_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTeamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(teams, teams_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListTeamsResponseBody() = default ;
    ListTeamsResponseBody(const ListTeamsResponseBody &) = default ;
    ListTeamsResponseBody(ListTeamsResponseBody &&) = default ;
    ListTeamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamsResponseBody() = default ;
    ListTeamsResponseBody& operator=(const ListTeamsResponseBody &) = default ;
    ListTeamsResponseBody& operator=(ListTeamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Teams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Teams& obj) { 
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(Cover, cover_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TeamId, teamId_);
      };
      friend void from_json(const Darabonba::Json& j, Teams& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(Cover, cover_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
      };
      Teams() = default ;
      Teams(const Teams &) = default ;
      Teams(Teams &&) = default ;
      Teams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Teams() = default ;
      Teams& operator=(const Teams &) = default ;
      Teams& operator=(Teams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Icon : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Icon& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Icon& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Icon() = default ;
        Icon(const Icon &) = default ;
        Icon(Icon &&) = default ;
        Icon(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Icon() = default ;
        Icon& operator=(const Icon &) = default ;
        Icon& operator=(Icon &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Icon& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Icon& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->cover_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->icon_ == nullptr
        && this->modifiedTime_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr && this->teamId_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Teams& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // cover Field Functions 
      bool hasCover() const { return this->cover_ != nullptr;};
      void deleteCover() { this->cover_ = nullptr;};
      inline string getCover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
      inline Teams& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Teams& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Teams& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Teams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline const Teams::Icon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, Teams::Icon) };
      inline Teams::Icon getIcon() { DARABONBA_PTR_GET(icon_, Teams::Icon) };
      inline Teams& setIcon(const Teams::Icon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
      inline Teams& setIcon(Teams::Icon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Teams& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Teams& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Teams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // teamId Field Functions 
      bool hasTeamId() const { return this->teamId_ != nullptr;};
      void deleteTeamId() { this->teamId_ = nullptr;};
      inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
      inline Teams& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<string> cover_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Teams::Icon> icon_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> teamId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->teams_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTeamsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTeamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // teams Field Functions 
    bool hasTeams() const { return this->teams_ != nullptr;};
    void deleteTeams() { this->teams_ = nullptr;};
    inline const vector<ListTeamsResponseBody::Teams> & getTeams() const { DARABONBA_PTR_GET_CONST(teams_, vector<ListTeamsResponseBody::Teams>) };
    inline vector<ListTeamsResponseBody::Teams> getTeams() { DARABONBA_PTR_GET(teams_, vector<ListTeamsResponseBody::Teams>) };
    inline ListTeamsResponseBody& setTeams(const vector<ListTeamsResponseBody::Teams> & teams) { DARABONBA_PTR_SET_VALUE(teams_, teams) };
    inline ListTeamsResponseBody& setTeams(vector<ListTeamsResponseBody::Teams> && teams) { DARABONBA_PTR_SET_RVALUE(teams_, teams) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListTeamsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListTeamsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTeamsResponseBody::Teams>> teams_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
