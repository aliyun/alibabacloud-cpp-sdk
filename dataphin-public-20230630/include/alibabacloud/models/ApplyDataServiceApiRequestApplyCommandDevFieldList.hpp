// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMANDDEVFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMANDDEVFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceApiRequestApplyCommandDevFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceApiRequestApplyCommandDevFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceApiRequestApplyCommandDevFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ApplyDataServiceApiRequestApplyCommandDevFieldList() = default ;
    ApplyDataServiceApiRequestApplyCommandDevFieldList(const ApplyDataServiceApiRequestApplyCommandDevFieldList &) = default ;
    ApplyDataServiceApiRequestApplyCommandDevFieldList(ApplyDataServiceApiRequestApplyCommandDevFieldList &&) = default ;
    ApplyDataServiceApiRequestApplyCommandDevFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceApiRequestApplyCommandDevFieldList() = default ;
    ApplyDataServiceApiRequestApplyCommandDevFieldList& operator=(const ApplyDataServiceApiRequestApplyCommandDevFieldList &) = default ;
    ApplyDataServiceApiRequestApplyCommandDevFieldList& operator=(ApplyDataServiceApiRequestApplyCommandDevFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ApplyDataServiceApiRequestApplyCommandDevFieldList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
