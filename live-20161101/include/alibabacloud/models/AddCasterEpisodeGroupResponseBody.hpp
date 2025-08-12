// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddCasterEpisodeGroupResponseBodyItemIds.hpp>
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
    virtual bool empty() const override { this->itemIds_ != nullptr
        && this->programId_ != nullptr && this->requestId_ != nullptr; };
    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const AddCasterEpisodeGroupResponseBodyItemIds & itemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, AddCasterEpisodeGroupResponseBodyItemIds) };
    inline AddCasterEpisodeGroupResponseBodyItemIds itemIds() { DARABONBA_PTR_GET(itemIds_, AddCasterEpisodeGroupResponseBodyItemIds) };
    inline AddCasterEpisodeGroupResponseBody& setItemIds(const AddCasterEpisodeGroupResponseBodyItemIds & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline AddCasterEpisodeGroupResponseBody& setItemIds(AddCasterEpisodeGroupResponseBodyItemIds && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline AddCasterEpisodeGroupResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterEpisodeGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the episodes.
    std::shared_ptr<AddCasterEpisodeGroupResponseBodyItemIds> itemIds_ = nullptr;
    // The ID of the episode list that was added. Record the ID as it can be used to manage the program being added.
    std::shared_ptr<string> programId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
