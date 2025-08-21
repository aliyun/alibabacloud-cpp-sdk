// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKeyPairsResponseBodyKeyPairsKeyPair.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeKeyPairsResponseBodyKeyPairs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBodyKeyPairs& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPair, keyPair_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBodyKeyPairs& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPair, keyPair_);
    };
    DescribeKeyPairsResponseBodyKeyPairs() = default ;
    DescribeKeyPairsResponseBodyKeyPairs(const DescribeKeyPairsResponseBodyKeyPairs &) = default ;
    DescribeKeyPairsResponseBodyKeyPairs(DescribeKeyPairsResponseBodyKeyPairs &&) = default ;
    DescribeKeyPairsResponseBodyKeyPairs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBodyKeyPairs() = default ;
    DescribeKeyPairsResponseBodyKeyPairs& operator=(const DescribeKeyPairsResponseBodyKeyPairs &) = default ;
    DescribeKeyPairsResponseBodyKeyPairs& operator=(DescribeKeyPairsResponseBodyKeyPairs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPair_ != nullptr; };
    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline const vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair> & keyPair() const { DARABONBA_PTR_GET_CONST(keyPair_, vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair>) };
    inline vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair> keyPair() { DARABONBA_PTR_GET(keyPair_, vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair>) };
    inline DescribeKeyPairsResponseBodyKeyPairs& setKeyPair(const vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair> & keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };
    inline DescribeKeyPairsResponseBodyKeyPairs& setKeyPair(vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair> && keyPair) { DARABONBA_PTR_SET_RVALUE(keyPair_, keyPair) };


  protected:
    std::shared_ptr<vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPair>> keyPair_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
