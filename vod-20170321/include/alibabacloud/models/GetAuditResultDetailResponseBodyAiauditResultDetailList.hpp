// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODYAIAUDITRESULTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODYAIAUDITRESULTDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditResultDetailResponseBodyAIAuditResultDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditResultDetailResponseBodyAIAuditResultDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(PornLabel, pornLabel_);
      DARABONBA_PTR_TO_JSON(PornScore, pornScore_);
      DARABONBA_PTR_TO_JSON(TerrorismLabel, terrorismLabel_);
      DARABONBA_PTR_TO_JSON(TerrorismScore, terrorismScore_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditResultDetailResponseBodyAIAuditResultDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(PornLabel, pornLabel_);
      DARABONBA_PTR_FROM_JSON(PornScore, pornScore_);
      DARABONBA_PTR_FROM_JSON(TerrorismLabel, terrorismLabel_);
      DARABONBA_PTR_FROM_JSON(TerrorismScore, terrorismScore_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetAuditResultDetailResponseBodyAIAuditResultDetailList() = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetailList(const GetAuditResultDetailResponseBodyAIAuditResultDetailList &) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetailList(GetAuditResultDetailResponseBodyAIAuditResultDetailList &&) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditResultDetailResponseBodyAIAuditResultDetailList() = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetailList& operator=(const GetAuditResultDetailResponseBodyAIAuditResultDetailList &) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetailList& operator=(GetAuditResultDetailResponseBodyAIAuditResultDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->object_ != nullptr && this->pornLabel_ != nullptr && this->pornScore_ != nullptr && this->terrorismLabel_ != nullptr && this->terrorismScore_ != nullptr
        && this->timestamp_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // pornLabel Field Functions 
    bool hasPornLabel() const { return this->pornLabel_ != nullptr;};
    void deletePornLabel() { this->pornLabel_ = nullptr;};
    inline string pornLabel() const { DARABONBA_PTR_GET_DEFAULT(pornLabel_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setPornLabel(string pornLabel) { DARABONBA_PTR_SET_VALUE(pornLabel_, pornLabel) };


    // pornScore Field Functions 
    bool hasPornScore() const { return this->pornScore_ != nullptr;};
    void deletePornScore() { this->pornScore_ = nullptr;};
    inline string pornScore() const { DARABONBA_PTR_GET_DEFAULT(pornScore_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setPornScore(string pornScore) { DARABONBA_PTR_SET_VALUE(pornScore_, pornScore) };


    // terrorismLabel Field Functions 
    bool hasTerrorismLabel() const { return this->terrorismLabel_ != nullptr;};
    void deleteTerrorismLabel() { this->terrorismLabel_ = nullptr;};
    inline string terrorismLabel() const { DARABONBA_PTR_GET_DEFAULT(terrorismLabel_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setTerrorismLabel(string terrorismLabel) { DARABONBA_PTR_SET_VALUE(terrorismLabel_, terrorismLabel) };


    // terrorismScore Field Functions 
    bool hasTerrorismScore() const { return this->terrorismScore_ != nullptr;};
    void deleteTerrorismScore() { this->terrorismScore_ = nullptr;};
    inline string terrorismScore() const { DARABONBA_PTR_GET_DEFAULT(terrorismScore_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setTerrorismScore(string terrorismScore) { DARABONBA_PTR_SET_VALUE(terrorismScore_, terrorismScore) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetailList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> object_ = nullptr;
    std::shared_ptr<string> pornLabel_ = nullptr;
    std::shared_ptr<string> pornScore_ = nullptr;
    std::shared_ptr<string> terrorismLabel_ = nullptr;
    std::shared_ptr<string> terrorismScore_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
