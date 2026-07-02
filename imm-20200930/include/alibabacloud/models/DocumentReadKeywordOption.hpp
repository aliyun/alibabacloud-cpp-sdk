// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTREADKEYWORDOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTREADKEYWORDOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentReadKeywordOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentReadKeywordOption& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Extract, extract_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentReadKeywordOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Extract, extract_);
    };
    DocumentReadKeywordOption() = default ;
    DocumentReadKeywordOption(const DocumentReadKeywordOption &) = default ;
    DocumentReadKeywordOption(DocumentReadKeywordOption &&) = default ;
    DocumentReadKeywordOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentReadKeywordOption() = default ;
    DocumentReadKeywordOption& operator=(const DocumentReadKeywordOption &) = default ;
    DocumentReadKeywordOption& operator=(DocumentReadKeywordOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->extract_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DocumentReadKeywordOption& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // extract Field Functions 
    bool hasExtract() const { return this->extract_ != nullptr;};
    void deleteExtract() { this->extract_ = nullptr;};
    inline bool getExtract() const { DARABONBA_PTR_GET_DEFAULT(extract_, false) };
    inline DocumentReadKeywordOption& setExtract(bool extract) { DARABONBA_PTR_SET_VALUE(extract_, extract) };


  protected:
    // The number of keywords. Valid values: 0 to 10.
    shared_ptr<int32_t> count_ {};
    // Specifies whether to extract keywords.
    shared_ptr<bool> extract_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
