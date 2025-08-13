// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZNODECHILDRENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTZNODECHILDRENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListZnodeChildrenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZnodeChildrenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ListZnodeChildrenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    ListZnodeChildrenResponseBodyData() = default ;
    ListZnodeChildrenResponseBodyData(const ListZnodeChildrenResponseBodyData &) = default ;
    ListZnodeChildrenResponseBodyData(ListZnodeChildrenResponseBodyData &&) = default ;
    ListZnodeChildrenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZnodeChildrenResponseBodyData() = default ;
    ListZnodeChildrenResponseBodyData& operator=(const ListZnodeChildrenResponseBodyData &) = default ;
    ListZnodeChildrenResponseBodyData& operator=(ListZnodeChildrenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->dir_ != nullptr && this->name_ != nullptr && this->path_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListZnodeChildrenResponseBodyData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline bool dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, false) };
    inline ListZnodeChildrenResponseBodyData& setDir(bool dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListZnodeChildrenResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListZnodeChildrenResponseBodyData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The data of the node.
    std::shared_ptr<string> data_ = nullptr;
    // Indicates whether the node information was returned. Valid values:
    // 
    // *   `true`: The node information was returned.
    // *   `false`: The node information failed to be returned.
    std::shared_ptr<bool> dir_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the node.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
