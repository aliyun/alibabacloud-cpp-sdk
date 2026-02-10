// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterEpisodeGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCasterEpisodeGroupResponseBody() = default ;
    AddCasterEpisodeGroupResponseBody(const AddCasterEpisodeGroupResponseBody &) = default ;
    AddCasterEpisodeGroupResponseBody(AddCasterEpisodeGroupResponseBody &&) = default ;
    AddCasterEpisodeGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeGroupResponseBody() = default ;
    AddCasterEpisodeGroupResponseBody& operator=(const AddCasterEpisodeGroupResponseBody &) = default ;
    AddCasterEpisodeGroupResponseBody& operator=(AddCasterEpisodeGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ItemIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItemIds& obj) { 
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      };
      friend void from_json(const Darabonba::Json& j, ItemIds& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      };
      ItemIds() = default ;
      ItemIds(const ItemIds &) = default ;
      ItemIds(ItemIds &&) = default ;
      ItemIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItemIds() = default ;
      ItemIds& operator=(const ItemIds &) = default ;
      ItemIds& operator=(ItemIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemId_ == nullptr; };
      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline const vector<string> & getItemId() const { DARABONBA_PTR_GET_CONST(itemId_, vector<string>) };
      inline vector<string> getItemId() { DARABONBA_PTR_GET(itemId_, vector<string>) };
      inline ItemIds& setItemId(const vector<string> & itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };
      inline ItemIds& setItemId(vector<string> && itemId) { DARABONBA_PTR_SET_RVALUE(itemId_, itemId) };


    protected:
      shared_ptr<vector<string>> itemId_ {};
    };

    virtual bool empty() const override { return this->itemIds_ == nullptr
        && this->programId_ == nullptr && this->requestId_ == nullptr; };
    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const AddCasterEpisodeGroupResponseBody::ItemIds & getItemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, AddCasterEpisodeGroupResponseBody::ItemIds) };
    inline AddCasterEpisodeGroupResponseBody::ItemIds getItemIds() { DARABONBA_PTR_GET(itemIds_, AddCasterEpisodeGroupResponseBody::ItemIds) };
    inline AddCasterEpisodeGroupResponseBody& setItemIds(const AddCasterEpisodeGroupResponseBody::ItemIds & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline AddCasterEpisodeGroupResponseBody& setItemIds(AddCasterEpisodeGroupResponseBody::ItemIds && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline AddCasterEpisodeGroupResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterEpisodeGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<AddCasterEpisodeGroupResponseBody::ItemIds> itemIds_ {};
    // The ID of the episode list that was added. Record the ID as it can be used to manage the program being added.
    shared_ptr<string> programId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
