// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODEDAEMONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODEDAEMONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyNodeListNodeDaemonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& obj) { 
      DARABONBA_PTR_TO_JSON(Daemon, daemon_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& obj) { 
      DARABONBA_PTR_FROM_JSON(Daemon, daemon_);
    };
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList() = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList(const DescribeClusterAttributeResponseBodyNodeListNodeDaemonList &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList(DescribeClusterAttributeResponseBodyNodeListNodeDaemonList &&) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyNodeListNodeDaemonList() = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& operator=(const DescribeClusterAttributeResponseBodyNodeListNodeDaemonList &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& operator=(DescribeClusterAttributeResponseBodyNodeListNodeDaemonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daemon_ == nullptr; };
    // daemon Field Functions 
    bool hasDaemon() const { return this->daemon_ != nullptr;};
    void deleteDaemon() { this->daemon_ = nullptr;};
    inline const vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon> & daemon() const { DARABONBA_PTR_GET_CONST(daemon_, vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon>) };
    inline vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon> daemon() { DARABONBA_PTR_GET(daemon_, vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon>) };
    inline DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& setDaemon(const vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon> & daemon) { DARABONBA_PTR_SET_VALUE(daemon_, daemon) };
    inline DescribeClusterAttributeResponseBodyNodeListNodeDaemonList& setDaemon(vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon> && daemon) { DARABONBA_PTR_SET_RVALUE(daemon_, daemon) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon>> daemon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
