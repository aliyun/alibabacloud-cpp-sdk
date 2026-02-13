// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATDOCUMENTPAGENUM_HPP_
#define ALIBABACLOUD_MODELS_CHATDOCUMENTPAGENUM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatRefDocPostion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatDocumentPageNum : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatDocumentPageNum& obj) { 
      DARABONBA_PTR_TO_JSON(num, num_);
      DARABONBA_PTR_TO_JSON(pos, pos_);
    };
    friend void from_json(const Darabonba::Json& j, ChatDocumentPageNum& obj) { 
      DARABONBA_PTR_FROM_JSON(num, num_);
      DARABONBA_PTR_FROM_JSON(pos, pos_);
    };
    ChatDocumentPageNum() = default ;
    ChatDocumentPageNum(const ChatDocumentPageNum &) = default ;
    ChatDocumentPageNum(ChatDocumentPageNum &&) = default ;
    ChatDocumentPageNum(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatDocumentPageNum() = default ;
    ChatDocumentPageNum& operator=(const ChatDocumentPageNum &) = default ;
    ChatDocumentPageNum& operator=(ChatDocumentPageNum &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->num_ == nullptr
        && this->pos_ == nullptr; };
    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ChatDocumentPageNum& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline const vector<vector<ChatRefDocPostion>> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<vector<ChatRefDocPostion>>) };
    inline vector<vector<ChatRefDocPostion>> getPos() { DARABONBA_PTR_GET(pos_, vector<vector<ChatRefDocPostion>>) };
    inline ChatDocumentPageNum& setPos(const vector<vector<ChatRefDocPostion>> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
    inline ChatDocumentPageNum& setPos(vector<vector<ChatRefDocPostion>> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


  protected:
    // Page numbers of related documents.
    shared_ptr<int32_t> num_ {};
    // Location information of the document.
    shared_ptr<vector<vector<ChatRefDocPostion>>> pos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
