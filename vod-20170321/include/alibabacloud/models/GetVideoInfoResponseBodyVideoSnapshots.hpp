// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODYVIDEOSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODYVIDEOSNAPSHOTS_HPP_
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
  class GetVideoInfoResponseBodyVideoSnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfoResponseBodyVideoSnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfoResponseBodyVideoSnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    GetVideoInfoResponseBodyVideoSnapshots() = default ;
    GetVideoInfoResponseBodyVideoSnapshots(const GetVideoInfoResponseBodyVideoSnapshots &) = default ;
    GetVideoInfoResponseBodyVideoSnapshots(GetVideoInfoResponseBodyVideoSnapshots &&) = default ;
    GetVideoInfoResponseBodyVideoSnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfoResponseBodyVideoSnapshots() = default ;
    GetVideoInfoResponseBodyVideoSnapshots& operator=(const GetVideoInfoResponseBodyVideoSnapshots &) = default ;
    GetVideoInfoResponseBodyVideoSnapshots& operator=(GetVideoInfoResponseBodyVideoSnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshot_ != nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<string> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<string>) };
    inline vector<string> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<string>) };
    inline GetVideoInfoResponseBodyVideoSnapshots& setSnapshot(const vector<string> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline GetVideoInfoResponseBodyVideoSnapshots& setSnapshot(vector<string> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<string>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
