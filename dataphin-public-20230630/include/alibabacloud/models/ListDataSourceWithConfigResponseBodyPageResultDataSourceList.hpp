// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULTDATASOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULTDATASOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo.hpp>
#include <alibabacloud/models/ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataSourceWithConfigResponseBodyPageResultDataSourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigResponseBodyPageResultDataSourceList& obj) { 
      DARABONBA_PTR_TO_JSON(DevDataSourceInfo, devDataSourceInfo_);
      DARABONBA_PTR_TO_JSON(ProdDataSourceInfo, prodDataSourceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigResponseBodyPageResultDataSourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DevDataSourceInfo, devDataSourceInfo_);
      DARABONBA_PTR_FROM_JSON(ProdDataSourceInfo, prodDataSourceInfo_);
    };
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList() = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList(const ListDataSourceWithConfigResponseBodyPageResultDataSourceList &) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList(ListDataSourceWithConfigResponseBodyPageResultDataSourceList &&) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceList() = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList& operator=(const ListDataSourceWithConfigResponseBodyPageResultDataSourceList &) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceList& operator=(ListDataSourceWithConfigResponseBodyPageResultDataSourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devDataSourceInfo_ == nullptr
        && return this->prodDataSourceInfo_ == nullptr; };
    // devDataSourceInfo Field Functions 
    bool hasDevDataSourceInfo() const { return this->devDataSourceInfo_ != nullptr;};
    void deleteDevDataSourceInfo() { this->devDataSourceInfo_ = nullptr;};
    inline const Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo & devDataSourceInfo() const { DARABONBA_PTR_GET_CONST(devDataSourceInfo_, Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo) };
    inline Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo devDataSourceInfo() { DARABONBA_PTR_GET(devDataSourceInfo_, Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceList& setDevDataSourceInfo(const Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo & devDataSourceInfo) { DARABONBA_PTR_SET_VALUE(devDataSourceInfo_, devDataSourceInfo) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceList& setDevDataSourceInfo(Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo && devDataSourceInfo) { DARABONBA_PTR_SET_RVALUE(devDataSourceInfo_, devDataSourceInfo) };


    // prodDataSourceInfo Field Functions 
    bool hasProdDataSourceInfo() const { return this->prodDataSourceInfo_ != nullptr;};
    void deleteProdDataSourceInfo() { this->prodDataSourceInfo_ = nullptr;};
    inline const Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo & prodDataSourceInfo() const { DARABONBA_PTR_GET_CONST(prodDataSourceInfo_, Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo) };
    inline Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo prodDataSourceInfo() { DARABONBA_PTR_GET(prodDataSourceInfo_, Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceList& setProdDataSourceInfo(const Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo & prodDataSourceInfo) { DARABONBA_PTR_SET_VALUE(prodDataSourceInfo_, prodDataSourceInfo) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceList& setProdDataSourceInfo(Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo && prodDataSourceInfo) { DARABONBA_PTR_SET_RVALUE(prodDataSourceInfo_, prodDataSourceInfo) };


  protected:
    // 开发环境数据源信息
    std::shared_ptr<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo> devDataSourceInfo_ = nullptr;
    // 生产环境数据源
    std::shared_ptr<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo> prodDataSourceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
