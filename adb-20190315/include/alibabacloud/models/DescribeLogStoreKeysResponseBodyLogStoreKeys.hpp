// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODYLOGSTOREKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREKEYSRESPONSEBODYLOGSTOREKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLogStoreKeysResponseBodyLogStoreKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogStoreKeysResponseBodyLogStoreKeys& obj) { 
      DARABONBA_PTR_TO_JSON(LogStoreKey, logStoreKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogStoreKeysResponseBodyLogStoreKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStoreKey, logStoreKey_);
    };
    DescribeLogStoreKeysResponseBodyLogStoreKeys() = default ;
    DescribeLogStoreKeysResponseBodyLogStoreKeys(const DescribeLogStoreKeysResponseBodyLogStoreKeys &) = default ;
    DescribeLogStoreKeysResponseBodyLogStoreKeys(DescribeLogStoreKeysResponseBodyLogStoreKeys &&) = default ;
    DescribeLogStoreKeysResponseBodyLogStoreKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogStoreKeysResponseBodyLogStoreKeys() = default ;
    DescribeLogStoreKeysResponseBodyLogStoreKeys& operator=(const DescribeLogStoreKeysResponseBodyLogStoreKeys &) = default ;
    DescribeLogStoreKeysResponseBodyLogStoreKeys& operator=(DescribeLogStoreKeysResponseBodyLogStoreKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStoreKey_ == nullptr; };
    // logStoreKey Field Functions 
    bool hasLogStoreKey() const { return this->logStoreKey_ != nullptr;};
    void deleteLogStoreKey() { this->logStoreKey_ = nullptr;};
    inline const vector<string> & logStoreKey() const { DARABONBA_PTR_GET_CONST(logStoreKey_, vector<string>) };
    inline vector<string> logStoreKey() { DARABONBA_PTR_GET(logStoreKey_, vector<string>) };
    inline DescribeLogStoreKeysResponseBodyLogStoreKeys& setLogStoreKey(const vector<string> & logStoreKey) { DARABONBA_PTR_SET_VALUE(logStoreKey_, logStoreKey) };
    inline DescribeLogStoreKeysResponseBodyLogStoreKeys& setLogStoreKey(vector<string> && logStoreKey) { DARABONBA_PTR_SET_RVALUE(logStoreKey_, logStoreKey) };


  protected:
    std::shared_ptr<vector<string>> logStoreKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
