// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHANDSHAKESFORRESOURCEDIRECTORYRESPONSEBODYHANDSHAKES_HPP_
#define ALIBABACLOUD_MODELS_LISTHANDSHAKESFORRESOURCEDIRECTORYRESPONSEBODYHANDSHAKES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListHandshakesForResourceDirectoryResponseBodyHandshakes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHandshakesForResourceDirectoryResponseBodyHandshakes& obj) { 
      DARABONBA_PTR_TO_JSON(Handshake, handshake_);
    };
    friend void from_json(const Darabonba::Json& j, ListHandshakesForResourceDirectoryResponseBodyHandshakes& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshake, handshake_);
    };
    ListHandshakesForResourceDirectoryResponseBodyHandshakes() = default ;
    ListHandshakesForResourceDirectoryResponseBodyHandshakes(const ListHandshakesForResourceDirectoryResponseBodyHandshakes &) = default ;
    ListHandshakesForResourceDirectoryResponseBodyHandshakes(ListHandshakesForResourceDirectoryResponseBodyHandshakes &&) = default ;
    ListHandshakesForResourceDirectoryResponseBodyHandshakes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHandshakesForResourceDirectoryResponseBodyHandshakes() = default ;
    ListHandshakesForResourceDirectoryResponseBodyHandshakes& operator=(const ListHandshakesForResourceDirectoryResponseBodyHandshakes &) = default ;
    ListHandshakesForResourceDirectoryResponseBodyHandshakes& operator=(ListHandshakesForResourceDirectoryResponseBodyHandshakes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handshake_ == nullptr; };
    // handshake Field Functions 
    bool hasHandshake() const { return this->handshake_ != nullptr;};
    void deleteHandshake() { this->handshake_ = nullptr;};
    inline const vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> & handshake() const { DARABONBA_PTR_GET_CONST(handshake_, vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>) };
    inline vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> handshake() { DARABONBA_PTR_GET(handshake_, vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>) };
    inline ListHandshakesForResourceDirectoryResponseBodyHandshakes& setHandshake(const vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> & handshake) { DARABONBA_PTR_SET_VALUE(handshake_, handshake) };
    inline ListHandshakesForResourceDirectoryResponseBodyHandshakes& setHandshake(vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> && handshake) { DARABONBA_PTR_SET_RVALUE(handshake_, handshake) };


  protected:
    std::shared_ptr<vector<Models::ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>> handshake_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
