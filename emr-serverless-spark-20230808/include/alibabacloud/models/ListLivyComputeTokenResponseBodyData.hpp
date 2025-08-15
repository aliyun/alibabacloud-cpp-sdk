// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTETOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTETOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLivyComputeTokenResponseBodyDataTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(tokens, tokens_);
    };
    ListLivyComputeTokenResponseBodyData() = default ;
    ListLivyComputeTokenResponseBodyData(const ListLivyComputeTokenResponseBodyData &) = default ;
    ListLivyComputeTokenResponseBodyData(ListLivyComputeTokenResponseBodyData &&) = default ;
    ListLivyComputeTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeTokenResponseBodyData() = default ;
    ListLivyComputeTokenResponseBodyData& operator=(const ListLivyComputeTokenResponseBodyData &) = default ;
    ListLivyComputeTokenResponseBodyData& operator=(ListLivyComputeTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tokens_ != nullptr; };
    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline const vector<Models::ListLivyComputeTokenResponseBodyDataTokens> & tokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Models::ListLivyComputeTokenResponseBodyDataTokens>) };
    inline vector<Models::ListLivyComputeTokenResponseBodyDataTokens> tokens() { DARABONBA_PTR_GET(tokens_, vector<Models::ListLivyComputeTokenResponseBodyDataTokens>) };
    inline ListLivyComputeTokenResponseBodyData& setTokens(const vector<Models::ListLivyComputeTokenResponseBodyDataTokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
    inline ListLivyComputeTokenResponseBodyData& setTokens(vector<Models::ListLivyComputeTokenResponseBodyDataTokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


  protected:
    std::shared_ptr<vector<Models::ListLivyComputeTokenResponseBodyDataTokens>> tokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
