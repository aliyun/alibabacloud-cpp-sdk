// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIALSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIALSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots(const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots(GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots &&) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& operator=(const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& operator=(GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshot_ == nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<string> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<string>) };
    inline vector<string> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<string>) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& setSnapshot(const vector<string> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots& setSnapshot(vector<string> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<string>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
