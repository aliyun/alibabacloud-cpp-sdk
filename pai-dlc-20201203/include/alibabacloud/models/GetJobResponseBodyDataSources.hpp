// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBodyDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    GetJobResponseBodyDataSources() = default ;
    GetJobResponseBodyDataSources(const GetJobResponseBodyDataSources &) = default ;
    GetJobResponseBodyDataSources(GetJobResponseBodyDataSources &&) = default ;
    GetJobResponseBodyDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyDataSources() = default ;
    GetJobResponseBodyDataSources& operator=(const GetJobResponseBodyDataSources &) = default ;
    GetJobResponseBodyDataSources& operator=(GetJobResponseBodyDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->mountPath_ == nullptr && return this->uri_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline GetJobResponseBodyDataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline GetJobResponseBodyDataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetJobResponseBodyDataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The data source ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // The local mount path. This parameter is optional. The default value is empty, which specifies that the mount path in the data source is used.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The data source URL.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
