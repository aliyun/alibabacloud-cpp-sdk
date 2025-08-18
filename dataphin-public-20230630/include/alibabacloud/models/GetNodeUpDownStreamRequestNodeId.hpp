// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUESTNODEID_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUESTNODEID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetNodeUpDownStreamRequestNodeId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamRequestNodeId& obj) { 
      DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamRequestNodeId& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetNodeUpDownStreamRequestNodeId() = default ;
    GetNodeUpDownStreamRequestNodeId(const GetNodeUpDownStreamRequestNodeId &) = default ;
    GetNodeUpDownStreamRequestNodeId(GetNodeUpDownStreamRequestNodeId &&) = default ;
    GetNodeUpDownStreamRequestNodeId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamRequestNodeId() = default ;
    GetNodeUpDownStreamRequestNodeId& operator=(const GetNodeUpDownStreamRequestNodeId &) = default ;
    GetNodeUpDownStreamRequestNodeId& operator=(GetNodeUpDownStreamRequestNodeId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldIdList_ != nullptr
        && this->id_ != nullptr; };
    // fieldIdList Field Functions 
    bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
    void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
    inline string fieldIdList() const { DARABONBA_PTR_GET_DEFAULT(fieldIdList_, "") };
    inline GetNodeUpDownStreamRequestNodeId& setFieldIdList(string fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetNodeUpDownStreamRequestNodeId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> fieldIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
