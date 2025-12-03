// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODEDAEMONLISTDAEMON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODEDAEMONLISTDAEMON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& obj) { 
      DARABONBA_PTR_TO_JSON(DaemonName, daemonName_);
      DARABONBA_PTR_TO_JSON(DaemonStatus, daemonStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& obj) { 
      DARABONBA_PTR_FROM_JSON(DaemonName, daemonName_);
      DARABONBA_PTR_FROM_JSON(DaemonStatus, daemonStatus_);
    };
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon() = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon(const DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon(DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon &&) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon() = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& operator=(const DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& operator=(DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daemonName_ == nullptr
        && return this->daemonStatus_ == nullptr; };
    // daemonName Field Functions 
    bool hasDaemonName() const { return this->daemonName_ != nullptr;};
    void deleteDaemonName() { this->daemonName_ = nullptr;};
    inline string daemonName() const { DARABONBA_PTR_GET_DEFAULT(daemonName_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& setDaemonName(string daemonName) { DARABONBA_PTR_SET_VALUE(daemonName_, daemonName) };


    // daemonStatus Field Functions 
    bool hasDaemonStatus() const { return this->daemonStatus_ != nullptr;};
    void deleteDaemonStatus() { this->daemonStatus_ = nullptr;};
    inline string daemonStatus() const { DARABONBA_PTR_GET_DEFAULT(daemonStatus_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon& setDaemonStatus(string daemonStatus) { DARABONBA_PTR_SET_VALUE(daemonStatus_, daemonStatus) };


  protected:
    std::shared_ptr<string> daemonName_ = nullptr;
    std::shared_ptr<string> daemonStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
