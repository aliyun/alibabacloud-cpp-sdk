// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMANDPRODFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMANDPRODFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceApiRequestApplyCommandProdFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceApiRequestApplyCommandProdFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceApiRequestApplyCommandProdFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ApplyDataServiceApiRequestApplyCommandProdFieldList() = default ;
    ApplyDataServiceApiRequestApplyCommandProdFieldList(const ApplyDataServiceApiRequestApplyCommandProdFieldList &) = default ;
    ApplyDataServiceApiRequestApplyCommandProdFieldList(ApplyDataServiceApiRequestApplyCommandProdFieldList &&) = default ;
    ApplyDataServiceApiRequestApplyCommandProdFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceApiRequestApplyCommandProdFieldList() = default ;
    ApplyDataServiceApiRequestApplyCommandProdFieldList& operator=(const ApplyDataServiceApiRequestApplyCommandProdFieldList &) = default ;
    ApplyDataServiceApiRequestApplyCommandProdFieldList& operator=(ApplyDataServiceApiRequestApplyCommandProdFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ApplyDataServiceApiRequestApplyCommandProdFieldList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
