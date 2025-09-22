// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREFDOCITEM_HPP_
#define ALIBABACLOUD_MODELS_CHATREFDOCITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatRefDocInfo.hpp>
#include <vector>
#include <alibabacloud/models/ChatDocumentPageNum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatRefDocItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRefDocItem& obj) { 
      DARABONBA_PTR_TO_JSON(docInfo, docInfo_);
      DARABONBA_PTR_TO_JSON(docName, docName_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(originDocName, originDocName_);
      DARABONBA_PTR_TO_JSON(originDocUrl, originDocUrl_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRefDocItem& obj) { 
      DARABONBA_PTR_FROM_JSON(docInfo, docInfo_);
      DARABONBA_PTR_FROM_JSON(docName, docName_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(originDocName, originDocName_);
      DARABONBA_PTR_FROM_JSON(originDocUrl, originDocUrl_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ChatRefDocItem() = default ;
    ChatRefDocItem(const ChatRefDocItem &) = default ;
    ChatRefDocItem(ChatRefDocItem &&) = default ;
    ChatRefDocItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRefDocItem() = default ;
    ChatRefDocItem& operator=(const ChatRefDocItem &) = default ;
    ChatRefDocItem& operator=(ChatRefDocItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docInfo_ != nullptr
        && this->docName_ != nullptr && this->docUrl_ != nullptr && this->originDocName_ != nullptr && this->originDocUrl_ != nullptr && this->pageNum_ != nullptr
        && this->sourceType_ != nullptr; };
    // docInfo Field Functions 
    bool hasDocInfo() const { return this->docInfo_ != nullptr;};
    void deleteDocInfo() { this->docInfo_ = nullptr;};
    inline const ChatRefDocInfo & docInfo() const { DARABONBA_PTR_GET_CONST(docInfo_, ChatRefDocInfo) };
    inline ChatRefDocInfo docInfo() { DARABONBA_PTR_GET(docInfo_, ChatRefDocInfo) };
    inline ChatRefDocItem& setDocInfo(const ChatRefDocInfo & docInfo) { DARABONBA_PTR_SET_VALUE(docInfo_, docInfo) };
    inline ChatRefDocItem& setDocInfo(ChatRefDocInfo && docInfo) { DARABONBA_PTR_SET_RVALUE(docInfo_, docInfo) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline ChatRefDocItem& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string docUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline ChatRefDocItem& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // originDocName Field Functions 
    bool hasOriginDocName() const { return this->originDocName_ != nullptr;};
    void deleteOriginDocName() { this->originDocName_ = nullptr;};
    inline string originDocName() const { DARABONBA_PTR_GET_DEFAULT(originDocName_, "") };
    inline ChatRefDocItem& setOriginDocName(string originDocName) { DARABONBA_PTR_SET_VALUE(originDocName_, originDocName) };


    // originDocUrl Field Functions 
    bool hasOriginDocUrl() const { return this->originDocUrl_ != nullptr;};
    void deleteOriginDocUrl() { this->originDocUrl_ = nullptr;};
    inline string originDocUrl() const { DARABONBA_PTR_GET_DEFAULT(originDocUrl_, "") };
    inline ChatRefDocItem& setOriginDocUrl(string originDocUrl) { DARABONBA_PTR_SET_VALUE(originDocUrl_, originDocUrl) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline const vector<ChatDocumentPageNum> & pageNum() const { DARABONBA_PTR_GET_CONST(pageNum_, vector<ChatDocumentPageNum>) };
    inline vector<ChatDocumentPageNum> pageNum() { DARABONBA_PTR_GET(pageNum_, vector<ChatDocumentPageNum>) };
    inline ChatRefDocItem& setPageNum(const vector<ChatDocumentPageNum> & pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };
    inline ChatRefDocItem& setPageNum(vector<ChatDocumentPageNum> && pageNum) { DARABONBA_PTR_SET_RVALUE(pageNum_, pageNum) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ChatRefDocItem& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<ChatRefDocInfo> docInfo_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> docUrl_ = nullptr;
    std::shared_ptr<string> originDocName_ = nullptr;
    std::shared_ptr<string> originDocUrl_ = nullptr;
    std::shared_ptr<vector<ChatDocumentPageNum>> pageNum_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
