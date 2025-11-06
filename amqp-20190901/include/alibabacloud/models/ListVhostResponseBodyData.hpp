// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVHOSTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVhostResponseBodyDataVhosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListVhostResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVhostResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Vhosts, vhosts_);
    };
    friend void from_json(const Darabonba::Json& j, ListVhostResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Vhosts, vhosts_);
    };
    ListVhostResponseBodyData() = default ;
    ListVhostResponseBodyData(const ListVhostResponseBodyData &) = default ;
    ListVhostResponseBodyData(ListVhostResponseBodyData &&) = default ;
    ListVhostResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVhostResponseBodyData() = default ;
    ListVhostResponseBodyData& operator=(const ListVhostResponseBodyData &) = default ;
    ListVhostResponseBodyData& operator=(ListVhostResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vhosts_ == nullptr; };
    // vhosts Field Functions 
    bool hasVhosts() const { return this->vhosts_ != nullptr;};
    void deleteVhosts() { this->vhosts_ = nullptr;};
    inline const vector<Models::ListVhostResponseBodyDataVhosts> & vhosts() const { DARABONBA_PTR_GET_CONST(vhosts_, vector<Models::ListVhostResponseBodyDataVhosts>) };
    inline vector<Models::ListVhostResponseBodyDataVhosts> vhosts() { DARABONBA_PTR_GET(vhosts_, vector<Models::ListVhostResponseBodyDataVhosts>) };
    inline ListVhostResponseBodyData& setVhosts(const vector<Models::ListVhostResponseBodyDataVhosts> & vhosts) { DARABONBA_PTR_SET_VALUE(vhosts_, vhosts) };
    inline ListVhostResponseBodyData& setVhosts(vector<Models::ListVhostResponseBodyDataVhosts> && vhosts) { DARABONBA_PTR_SET_RVALUE(vhosts_, vhosts) };


  protected:
    std::shared_ptr<vector<Models::ListVhostResponseBodyDataVhosts>> vhosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
