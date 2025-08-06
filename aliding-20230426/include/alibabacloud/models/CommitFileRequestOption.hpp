// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITFILEREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_COMMITFILEREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CommitFileRequestOptionAppProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommitFileRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitFileRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
      DARABONBA_PTR_TO_JSON(ConvertToOnlineDoc, convertToOnlineDoc_);
      DARABONBA_PTR_TO_JSON(ConvertToOnlineDocTargetDocumentType, convertToOnlineDocTargetDocumentType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CommitFileRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
      DARABONBA_PTR_FROM_JSON(ConvertToOnlineDoc, convertToOnlineDoc_);
      DARABONBA_PTR_FROM_JSON(ConvertToOnlineDocTargetDocumentType, convertToOnlineDocTargetDocumentType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CommitFileRequestOption() = default ;
    CommitFileRequestOption(const CommitFileRequestOption &) = default ;
    CommitFileRequestOption(CommitFileRequestOption &&) = default ;
    CommitFileRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitFileRequestOption() = default ;
    CommitFileRequestOption& operator=(const CommitFileRequestOption &) = default ;
    CommitFileRequestOption& operator=(CommitFileRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appProperties_ != nullptr
        && this->conflictStrategy_ != nullptr && this->convertToOnlineDoc_ != nullptr && this->convertToOnlineDocTargetDocumentType_ != nullptr && this->size_ != nullptr; };
    // appProperties Field Functions 
    bool hasAppProperties() const { return this->appProperties_ != nullptr;};
    void deleteAppProperties() { this->appProperties_ = nullptr;};
    inline const vector<Models::CommitFileRequestOptionAppProperties> & appProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, vector<Models::CommitFileRequestOptionAppProperties>) };
    inline vector<Models::CommitFileRequestOptionAppProperties> appProperties() { DARABONBA_PTR_GET(appProperties_, vector<Models::CommitFileRequestOptionAppProperties>) };
    inline CommitFileRequestOption& setAppProperties(const vector<Models::CommitFileRequestOptionAppProperties> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
    inline CommitFileRequestOption& setAppProperties(vector<Models::CommitFileRequestOptionAppProperties> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


    // conflictStrategy Field Functions 
    bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
    void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
    inline string conflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
    inline CommitFileRequestOption& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


    // convertToOnlineDoc Field Functions 
    bool hasConvertToOnlineDoc() const { return this->convertToOnlineDoc_ != nullptr;};
    void deleteConvertToOnlineDoc() { this->convertToOnlineDoc_ = nullptr;};
    inline bool convertToOnlineDoc() const { DARABONBA_PTR_GET_DEFAULT(convertToOnlineDoc_, false) };
    inline CommitFileRequestOption& setConvertToOnlineDoc(bool convertToOnlineDoc) { DARABONBA_PTR_SET_VALUE(convertToOnlineDoc_, convertToOnlineDoc) };


    // convertToOnlineDocTargetDocumentType Field Functions 
    bool hasConvertToOnlineDocTargetDocumentType() const { return this->convertToOnlineDocTargetDocumentType_ != nullptr;};
    void deleteConvertToOnlineDocTargetDocumentType() { this->convertToOnlineDocTargetDocumentType_ = nullptr;};
    inline string convertToOnlineDocTargetDocumentType() const { DARABONBA_PTR_GET_DEFAULT(convertToOnlineDocTargetDocumentType_, "") };
    inline CommitFileRequestOption& setConvertToOnlineDocTargetDocumentType(string convertToOnlineDocTargetDocumentType) { DARABONBA_PTR_SET_VALUE(convertToOnlineDocTargetDocumentType_, convertToOnlineDocTargetDocumentType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CommitFileRequestOption& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<vector<Models::CommitFileRequestOptionAppProperties>> appProperties_ = nullptr;
    std::shared_ptr<string> conflictStrategy_ = nullptr;
    std::shared_ptr<bool> convertToOnlineDoc_ = nullptr;
    std::shared_ptr<string> convertToOnlineDocTargetDocumentType_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
