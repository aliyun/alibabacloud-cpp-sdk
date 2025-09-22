// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREFDOCINFO_HPP_
#define ALIBABACLOUD_MODELS_CHATREFDOCINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatRefDocPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatRefDocInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRefDocInfo& obj) { 
      DARABONBA_PTR_TO_JSON(pageListInfo, pageListInfo_);
      DARABONBA_PTR_TO_JSON(pages, pages_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRefDocInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(pageListInfo, pageListInfo_);
      DARABONBA_PTR_FROM_JSON(pages, pages_);
    };
    ChatRefDocInfo() = default ;
    ChatRefDocInfo(const ChatRefDocInfo &) = default ;
    ChatRefDocInfo(ChatRefDocInfo &&) = default ;
    ChatRefDocInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRefDocInfo() = default ;
    ChatRefDocInfo& operator=(const ChatRefDocInfo &) = default ;
    ChatRefDocInfo& operator=(ChatRefDocInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageListInfo_ != nullptr
        && this->pages_ != nullptr; };
    // pageListInfo Field Functions 
    bool hasPageListInfo() const { return this->pageListInfo_ != nullptr;};
    void deletePageListInfo() { this->pageListInfo_ = nullptr;};
    inline const vector<ChatRefDocPageInfo> & pageListInfo() const { DARABONBA_PTR_GET_CONST(pageListInfo_, vector<ChatRefDocPageInfo>) };
    inline vector<ChatRefDocPageInfo> pageListInfo() { DARABONBA_PTR_GET(pageListInfo_, vector<ChatRefDocPageInfo>) };
    inline ChatRefDocInfo& setPageListInfo(const vector<ChatRefDocPageInfo> & pageListInfo) { DARABONBA_PTR_SET_VALUE(pageListInfo_, pageListInfo) };
    inline ChatRefDocInfo& setPageListInfo(vector<ChatRefDocPageInfo> && pageListInfo) { DARABONBA_PTR_SET_RVALUE(pageListInfo_, pageListInfo) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int64_t pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
    inline ChatRefDocInfo& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


  protected:
    std::shared_ptr<vector<ChatRefDocPageInfo>> pageListInfo_ = nullptr;
    std::shared_ptr<int64_t> pages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
