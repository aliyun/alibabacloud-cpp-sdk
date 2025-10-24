// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODYLOGFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODYLOGFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCommonLogFieldsResponseBodyLogFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonLogFieldsResponseBodyLogFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(LogKey, logKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonLogFieldsResponseBodyLogFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(LogKey, logKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCommonLogFieldsResponseBodyLogFieldList() = default ;
    DescribeCommonLogFieldsResponseBodyLogFieldList(const DescribeCommonLogFieldsResponseBodyLogFieldList &) = default ;
    DescribeCommonLogFieldsResponseBodyLogFieldList(DescribeCommonLogFieldsResponseBodyLogFieldList &&) = default ;
    DescribeCommonLogFieldsResponseBodyLogFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonLogFieldsResponseBodyLogFieldList() = default ;
    DescribeCommonLogFieldsResponseBodyLogFieldList& operator=(const DescribeCommonLogFieldsResponseBodyLogFieldList &) = default ;
    DescribeCommonLogFieldsResponseBodyLogFieldList& operator=(DescribeCommonLogFieldsResponseBodyLogFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDefault_ == nullptr
        && return this->isRequired_ == nullptr && return this->logKey_ == nullptr && return this->status_ == nullptr; };
    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeCommonLogFieldsResponseBodyLogFieldList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline DescribeCommonLogFieldsResponseBodyLogFieldList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // logKey Field Functions 
    bool hasLogKey() const { return this->logKey_ != nullptr;};
    void deleteLogKey() { this->logKey_ = nullptr;};
    inline string logKey() const { DARABONBA_PTR_GET_DEFAULT(logKey_, "") };
    inline DescribeCommonLogFieldsResponseBodyLogFieldList& setLogKey(string logKey) { DARABONBA_PTR_SET_VALUE(logKey_, logKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeCommonLogFieldsResponseBodyLogFieldList& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<string> logKey_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
