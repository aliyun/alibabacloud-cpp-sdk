// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODYLOGHUBINFOLOGHUBSTORES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGHUBDETAILRESPONSEBODYLOGHUBINFOLOGHUBSTORES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& obj) { 
      DARABONBA_PTR_TO_JSON(LogHubStore, logHubStore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& obj) { 
      DARABONBA_PTR_FROM_JSON(LogHubStore, logHubStore_);
    };
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores() = default ;
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores(const DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores &) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores(DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores &&) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores() = default ;
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& operator=(const DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores &) = default ;
    DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& operator=(DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logHubStore_ == nullptr; };
    // logHubStore Field Functions 
    bool hasLogHubStore() const { return this->logHubStore_ != nullptr;};
    void deleteLogHubStore() { this->logHubStore_ = nullptr;};
    inline const vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore> & logHubStore() const { DARABONBA_PTR_GET_CONST(logHubStore_, vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore>) };
    inline vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore> logHubStore() { DARABONBA_PTR_GET(logHubStore_, vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore>) };
    inline DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& setLogHubStore(const vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore> & logHubStore) { DARABONBA_PTR_SET_VALUE(logHubStore_, logHubStore) };
    inline DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores& setLogHubStore(vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore> && logHubStore) { DARABONBA_PTR_SET_RVALUE(logHubStore_, logHubStore) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore>> logHubStore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
