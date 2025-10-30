// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUESTREPLACECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REPLACEPROJECTWHITELISTSREQUESTREPLACECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ReplaceProjectWhiteListsRequestReplaceCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceProjectWhiteListsRequestReplaceCommand& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceProjectWhiteListsRequestReplaceCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
    };
    ReplaceProjectWhiteListsRequestReplaceCommand() = default ;
    ReplaceProjectWhiteListsRequestReplaceCommand(const ReplaceProjectWhiteListsRequestReplaceCommand &) = default ;
    ReplaceProjectWhiteListsRequestReplaceCommand(ReplaceProjectWhiteListsRequestReplaceCommand &&) = default ;
    ReplaceProjectWhiteListsRequestReplaceCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceProjectWhiteListsRequestReplaceCommand() = default ;
    ReplaceProjectWhiteListsRequestReplaceCommand& operator=(const ReplaceProjectWhiteListsRequestReplaceCommand &) = default ;
    ReplaceProjectWhiteListsRequestReplaceCommand& operator=(ReplaceProjectWhiteListsRequestReplaceCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->whiteLists_ == nullptr; };
    // whiteLists Field Functions 
    bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
    void deleteWhiteLists() { this->whiteLists_ = nullptr;};
    inline const vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists> & whiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists>) };
    inline vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists> whiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists>) };
    inline ReplaceProjectWhiteListsRequestReplaceCommand& setWhiteLists(const vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
    inline ReplaceProjectWhiteListsRequestReplaceCommand& setWhiteLists(vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::ReplaceProjectWhiteListsRequestReplaceCommandWhiteLists>> whiteLists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
