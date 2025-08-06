// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODESREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETNODESREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodesRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodesRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_TO_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodesRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
      DARABONBA_PTR_FROM_JSON(WithStatisticalInfo, withStatisticalInfo_);
    };
    GetNodesRequestOption() = default ;
    GetNodesRequestOption(const GetNodesRequestOption &) = default ;
    GetNodesRequestOption(GetNodesRequestOption &&) = default ;
    GetNodesRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodesRequestOption() = default ;
    GetNodesRequestOption& operator=(const GetNodesRequestOption &) = default ;
    GetNodesRequestOption& operator=(GetNodesRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->withPermissionRole_ != nullptr
        && this->withStatisticalInfo_ != nullptr; };
    // withPermissionRole Field Functions 
    bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
    void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
    inline bool withPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
    inline GetNodesRequestOption& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


    // withStatisticalInfo Field Functions 
    bool hasWithStatisticalInfo() const { return this->withStatisticalInfo_ != nullptr;};
    void deleteWithStatisticalInfo() { this->withStatisticalInfo_ = nullptr;};
    inline bool withStatisticalInfo() const { DARABONBA_PTR_GET_DEFAULT(withStatisticalInfo_, false) };
    inline GetNodesRequestOption& setWithStatisticalInfo(bool withStatisticalInfo) { DARABONBA_PTR_SET_VALUE(withStatisticalInfo_, withStatisticalInfo) };


  protected:
    std::shared_ptr<bool> withPermissionRole_ = nullptr;
    std::shared_ptr<bool> withStatisticalInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
