// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHANDSHAKESFORACCOUNTRESPONSEBODYHANDSHAKES_HPP_
#define ALIBABACLOUD_MODELS_LISTHANDSHAKESFORACCOUNTRESPONSEBODYHANDSHAKES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHandshakesForAccountResponseBodyHandshakesHandshake.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListHandshakesForAccountResponseBodyHandshakes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHandshakesForAccountResponseBodyHandshakes& obj) { 
      DARABONBA_PTR_TO_JSON(Handshake, handshake_);
    };
    friend void from_json(const Darabonba::Json& j, ListHandshakesForAccountResponseBodyHandshakes& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshake, handshake_);
    };
    ListHandshakesForAccountResponseBodyHandshakes() = default ;
    ListHandshakesForAccountResponseBodyHandshakes(const ListHandshakesForAccountResponseBodyHandshakes &) = default ;
    ListHandshakesForAccountResponseBodyHandshakes(ListHandshakesForAccountResponseBodyHandshakes &&) = default ;
    ListHandshakesForAccountResponseBodyHandshakes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHandshakesForAccountResponseBodyHandshakes() = default ;
    ListHandshakesForAccountResponseBodyHandshakes& operator=(const ListHandshakesForAccountResponseBodyHandshakes &) = default ;
    ListHandshakesForAccountResponseBodyHandshakes& operator=(ListHandshakesForAccountResponseBodyHandshakes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handshake_ != nullptr; };
    // handshake Field Functions 
    bool hasHandshake() const { return this->handshake_ != nullptr;};
    void deleteHandshake() { this->handshake_ = nullptr;};
    inline const vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake> & handshake() const { DARABONBA_PTR_GET_CONST(handshake_, vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake>) };
    inline vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake> handshake() { DARABONBA_PTR_GET(handshake_, vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake>) };
    inline ListHandshakesForAccountResponseBodyHandshakes& setHandshake(const vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake> & handshake) { DARABONBA_PTR_SET_VALUE(handshake_, handshake) };
    inline ListHandshakesForAccountResponseBodyHandshakes& setHandshake(vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake> && handshake) { DARABONBA_PTR_SET_RVALUE(handshake_, handshake) };


  protected:
    std::shared_ptr<vector<Models::ListHandshakesForAccountResponseBodyHandshakesHandshake>> handshake_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
