// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSLAYERORDERCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSLAYERORDERCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList(const DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList(DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsLayerOrderConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The unique ID of the resource.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   **background**: background material
    // *   **media**: multimedia material
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
