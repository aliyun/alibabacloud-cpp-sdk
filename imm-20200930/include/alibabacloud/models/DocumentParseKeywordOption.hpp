// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTPARSEKEYWORDOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTPARSEKEYWORDOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentParseKeywordOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentParseKeywordOption& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Extract, extract_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentParseKeywordOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Extract, extract_);
    };
    DocumentParseKeywordOption() = default ;
    DocumentParseKeywordOption(const DocumentParseKeywordOption &) = default ;
    DocumentParseKeywordOption(DocumentParseKeywordOption &&) = default ;
    DocumentParseKeywordOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentParseKeywordOption() = default ;
    DocumentParseKeywordOption& operator=(const DocumentParseKeywordOption &) = default ;
    DocumentParseKeywordOption& operator=(DocumentParseKeywordOption &&) = default ;
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
    inline DocumentParseKeywordOption& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // extract Field Functions 
    bool hasExtract() const { return this->extract_ != nullptr;};
    void deleteExtract() { this->extract_ = nullptr;};
    inline bool getExtract() const { DARABONBA_PTR_GET_DEFAULT(extract_, false) };
    inline DocumentParseKeywordOption& setExtract(bool extract) { DARABONBA_PTR_SET_VALUE(extract_, extract) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<bool> extract_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
