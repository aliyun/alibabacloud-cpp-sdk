// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBITOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKyuubiTokenResponseBodyDataTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(tokens, tokens_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(tokens, tokens_);
    };
    ListKyuubiTokenResponseBodyData() = default ;
    ListKyuubiTokenResponseBodyData(const ListKyuubiTokenResponseBodyData &) = default ;
    ListKyuubiTokenResponseBodyData(ListKyuubiTokenResponseBodyData &&) = default ;
    ListKyuubiTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiTokenResponseBodyData() = default ;
    ListKyuubiTokenResponseBodyData& operator=(const ListKyuubiTokenResponseBodyData &) = default ;
    ListKyuubiTokenResponseBodyData& operator=(ListKyuubiTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tokens_ != nullptr; };
    // tokens Field Functions 
    bool hasTokens() const { return this->tokens_ != nullptr;};
    void deleteTokens() { this->tokens_ = nullptr;};
    inline const vector<Models::ListKyuubiTokenResponseBodyDataTokens> & tokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Models::ListKyuubiTokenResponseBodyDataTokens>) };
    inline vector<Models::ListKyuubiTokenResponseBodyDataTokens> tokens() { DARABONBA_PTR_GET(tokens_, vector<Models::ListKyuubiTokenResponseBodyDataTokens>) };
    inline ListKyuubiTokenResponseBodyData& setTokens(const vector<Models::ListKyuubiTokenResponseBodyDataTokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
    inline ListKyuubiTokenResponseBodyData& setTokens(vector<Models::ListKyuubiTokenResponseBodyDataTokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


  protected:
    std::shared_ptr<vector<Models::ListKyuubiTokenResponseBodyDataTokens>> tokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
