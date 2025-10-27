// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMatchedMaliciousNamesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMatchedMaliciousNamesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMatchedMaliciousNamesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    DescribeMatchedMaliciousNamesResponseBodyData() = default ;
    DescribeMatchedMaliciousNamesResponseBodyData(const DescribeMatchedMaliciousNamesResponseBodyData &) = default ;
    DescribeMatchedMaliciousNamesResponseBodyData(DescribeMatchedMaliciousNamesResponseBodyData &&) = default ;
    DescribeMatchedMaliciousNamesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMatchedMaliciousNamesResponseBodyData() = default ;
    DescribeMatchedMaliciousNamesResponseBodyData& operator=(const DescribeMatchedMaliciousNamesResponseBodyData &) = default ;
    DescribeMatchedMaliciousNamesResponseBodyData& operator=(DescribeMatchedMaliciousNamesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->key_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeMatchedMaliciousNamesResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeMatchedMaliciousNamesResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The display name of the malicious image sample type.
    std::shared_ptr<string> displayName_ = nullptr;
    // The key of the malicious image sample type.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
