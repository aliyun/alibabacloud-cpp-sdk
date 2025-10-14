// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnatAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
    };
    DescribeSnatAttributeRequest() = default ;
    DescribeSnatAttributeRequest(const DescribeSnatAttributeRequest &) = default ;
    DescribeSnatAttributeRequest(DescribeSnatAttributeRequest &&) = default ;
    DescribeSnatAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatAttributeRequest() = default ;
    DescribeSnatAttributeRequest& operator=(const DescribeSnatAttributeRequest &) = default ;
    DescribeSnatAttributeRequest& operator=(DescribeSnatAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatEntryId_ == nullptr; };
    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatAttributeRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


  protected:
    // The ID of the SNAT entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> snatEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
