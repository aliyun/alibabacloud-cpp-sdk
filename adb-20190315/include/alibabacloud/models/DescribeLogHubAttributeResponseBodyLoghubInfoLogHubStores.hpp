// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODYLOGHUBINFOLOGHUBSTORES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBATTRIBUTERESPONSEBODYLOGHUBINFOLOGHUBSTORES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& obj) { 
      DARABONBA_PTR_TO_JSON(LogHubStore, logHubStore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& obj) { 
      DARABONBA_PTR_FROM_JSON(LogHubStore, logHubStore_);
    };
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores() = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores(const DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores &) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores(DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores &&) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores() = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& operator=(const DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores &) = default ;
    DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& operator=(DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logHubStore_ != nullptr; };
    // logHubStore Field Functions 
    bool hasLogHubStore() const { return this->logHubStore_ != nullptr;};
    void deleteLogHubStore() { this->logHubStore_ = nullptr;};
    inline const vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore> & logHubStore() const { DARABONBA_PTR_GET_CONST(logHubStore_, vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore>) };
    inline vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore> logHubStore() { DARABONBA_PTR_GET(logHubStore_, vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore>) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& setLogHubStore(const vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore> & logHubStore) { DARABONBA_PTR_SET_VALUE(logHubStore_, logHubStore) };
    inline DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores& setLogHubStore(vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore> && logHubStore) { DARABONBA_PTR_SET_RVALUE(logHubStore_, logHubStore) };


  protected:
    std::shared_ptr<vector<Models::DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore>> logHubStore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
