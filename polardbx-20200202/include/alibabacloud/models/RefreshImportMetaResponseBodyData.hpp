// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHIMPORTMETARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFRESHIMPORTMETARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class RefreshImportMetaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshImportMetaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshImportMetaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    RefreshImportMetaResponseBodyData() = default ;
    RefreshImportMetaResponseBodyData(const RefreshImportMetaResponseBodyData &) = default ;
    RefreshImportMetaResponseBodyData(RefreshImportMetaResponseBodyData &&) = default ;
    RefreshImportMetaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshImportMetaResponseBodyData() = default ;
    RefreshImportMetaResponseBodyData& operator=(const RefreshImportMetaResponseBodyData &) = default ;
    RefreshImportMetaResponseBodyData& operator=(RefreshImportMetaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slinkTaskId_ == nullptr; };
    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline RefreshImportMetaResponseBodyData& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    std::shared_ptr<string> slinkTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
