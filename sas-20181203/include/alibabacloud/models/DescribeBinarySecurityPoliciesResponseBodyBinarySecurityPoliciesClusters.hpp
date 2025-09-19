// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODYBINARYSECURITYPOLICIESCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODYBINARYSECURITYPOLICIESCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
    };
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters() = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters(const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters &) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters(DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters &&) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters() = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& operator=(const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters &) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& operator=(DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->namespaces_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
