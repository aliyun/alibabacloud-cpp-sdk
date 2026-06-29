// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAgenticSpacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticSpacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgenticSpaces, agenticSpaces_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticSpacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgenticSpaces, agenticSpaces_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAgenticSpacesResponseBody() = default ;
    DescribeAgenticSpacesResponseBody(const DescribeAgenticSpacesResponseBody &) = default ;
    DescribeAgenticSpacesResponseBody(DescribeAgenticSpacesResponseBody &&) = default ;
    DescribeAgenticSpacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticSpacesResponseBody() = default ;
    DescribeAgenticSpacesResponseBody& operator=(const DescribeAgenticSpacesResponseBody &) = default ;
    DescribeAgenticSpacesResponseBody& operator=(DescribeAgenticSpacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgenticSpaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgenticSpaces& obj) { 
        DARABONBA_PTR_TO_JSON(AgenticSpace, agenticSpace_);
      };
      friend void from_json(const Darabonba::Json& j, AgenticSpaces& obj) { 
        DARABONBA_PTR_FROM_JSON(AgenticSpace, agenticSpace_);
      };
      AgenticSpaces() = default ;
      AgenticSpaces(const AgenticSpaces &) = default ;
      AgenticSpaces(AgenticSpaces &&) = default ;
      AgenticSpaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgenticSpaces() = default ;
      AgenticSpaces& operator=(const AgenticSpaces &) = default ;
      AgenticSpaces& operator=(AgenticSpaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AgenticSpace : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgenticSpace& obj) { 
          DARABONBA_PTR_TO_JSON(AgenticSpaceId, agenticSpaceId_);
          DARABONBA_PTR_TO_JSON(Azone, azone_);
          DARABONBA_PTR_TO_JSON(CreateTimeUtc, createTimeUtc_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FileCountUsage, fileCountUsage_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(SpaceUsage, spaceUsage_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTimeUtc, updateTimeUtc_);
        };
        friend void from_json(const Darabonba::Json& j, AgenticSpace& obj) { 
          DARABONBA_PTR_FROM_JSON(AgenticSpaceId, agenticSpaceId_);
          DARABONBA_PTR_FROM_JSON(Azone, azone_);
          DARABONBA_PTR_FROM_JSON(CreateTimeUtc, createTimeUtc_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FileCountUsage, fileCountUsage_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(SpaceUsage, spaceUsage_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTimeUtc, updateTimeUtc_);
        };
        AgenticSpace() = default ;
        AgenticSpace(const AgenticSpace &) = default ;
        AgenticSpace(AgenticSpace &&) = default ;
        AgenticSpace(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgenticSpace() = default ;
        AgenticSpace& operator=(const AgenticSpace &) = default ;
        AgenticSpace& operator=(AgenticSpace &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Quota : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Quota& obj) { 
            DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
            DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
          };
          friend void from_json(const Darabonba::Json& j, Quota& obj) { 
            DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
            DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
          };
          Quota() = default ;
          Quota(const Quota &) = default ;
          Quota(Quota &&) = default ;
          Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Quota() = default ;
          Quota& operator=(const Quota &) = default ;
          Quota& operator=(Quota &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->sizeLimit_ == nullptr; };
          // fileCountLimit Field Functions 
          bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
          void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
          inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
          inline Quota& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


          // sizeLimit Field Functions 
          bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
          void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
          inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
          inline Quota& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


        protected:
          shared_ptr<int64_t> fileCountLimit_ {};
          shared_ptr<int64_t> sizeLimit_ {};
        };

        virtual bool empty() const override { return this->agenticSpaceId_ == nullptr
        && this->azone_ == nullptr && this->createTimeUtc_ == nullptr && this->description_ == nullptr && this->fileCountUsage_ == nullptr && this->fileSystemId_ == nullptr
        && this->fileSystemPath_ == nullptr && this->quota_ == nullptr && this->spaceUsage_ == nullptr && this->status_ == nullptr && this->updateTimeUtc_ == nullptr; };
        // agenticSpaceId Field Functions 
        bool hasAgenticSpaceId() const { return this->agenticSpaceId_ != nullptr;};
        void deleteAgenticSpaceId() { this->agenticSpaceId_ = nullptr;};
        inline string getAgenticSpaceId() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceId_, "") };
        inline AgenticSpace& setAgenticSpaceId(string agenticSpaceId) { DARABONBA_PTR_SET_VALUE(agenticSpaceId_, agenticSpaceId) };


        // azone Field Functions 
        bool hasAzone() const { return this->azone_ != nullptr;};
        void deleteAzone() { this->azone_ = nullptr;};
        inline string getAzone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
        inline AgenticSpace& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


        // createTimeUtc Field Functions 
        bool hasCreateTimeUtc() const { return this->createTimeUtc_ != nullptr;};
        void deleteCreateTimeUtc() { this->createTimeUtc_ = nullptr;};
        inline string getCreateTimeUtc() const { DARABONBA_PTR_GET_DEFAULT(createTimeUtc_, "") };
        inline AgenticSpace& setCreateTimeUtc(string createTimeUtc) { DARABONBA_PTR_SET_VALUE(createTimeUtc_, createTimeUtc) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AgenticSpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileCountUsage Field Functions 
        bool hasFileCountUsage() const { return this->fileCountUsage_ != nullptr;};
        void deleteFileCountUsage() { this->fileCountUsage_ = nullptr;};
        inline int64_t getFileCountUsage() const { DARABONBA_PTR_GET_DEFAULT(fileCountUsage_, 0L) };
        inline AgenticSpace& setFileCountUsage(int64_t fileCountUsage) { DARABONBA_PTR_SET_VALUE(fileCountUsage_, fileCountUsage) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline AgenticSpace& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // fileSystemPath Field Functions 
        bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
        void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
        inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
        inline AgenticSpace& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline const AgenticSpace::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, AgenticSpace::Quota) };
        inline AgenticSpace::Quota getQuota() { DARABONBA_PTR_GET(quota_, AgenticSpace::Quota) };
        inline AgenticSpace& setQuota(const AgenticSpace::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
        inline AgenticSpace& setQuota(AgenticSpace::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


        // spaceUsage Field Functions 
        bool hasSpaceUsage() const { return this->spaceUsage_ != nullptr;};
        void deleteSpaceUsage() { this->spaceUsage_ = nullptr;};
        inline int64_t getSpaceUsage() const { DARABONBA_PTR_GET_DEFAULT(spaceUsage_, 0L) };
        inline AgenticSpace& setSpaceUsage(int64_t spaceUsage) { DARABONBA_PTR_SET_VALUE(spaceUsage_, spaceUsage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AgenticSpace& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTimeUtc Field Functions 
        bool hasUpdateTimeUtc() const { return this->updateTimeUtc_ != nullptr;};
        void deleteUpdateTimeUtc() { this->updateTimeUtc_ = nullptr;};
        inline string getUpdateTimeUtc() const { DARABONBA_PTR_GET_DEFAULT(updateTimeUtc_, "") };
        inline AgenticSpace& setUpdateTimeUtc(string updateTimeUtc) { DARABONBA_PTR_SET_VALUE(updateTimeUtc_, updateTimeUtc) };


      protected:
        shared_ptr<string> agenticSpaceId_ {};
        shared_ptr<string> azone_ {};
        shared_ptr<string> createTimeUtc_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> fileCountUsage_ {};
        shared_ptr<string> fileSystemId_ {};
        shared_ptr<string> fileSystemPath_ {};
        shared_ptr<AgenticSpace::Quota> quota_ {};
        shared_ptr<int64_t> spaceUsage_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> updateTimeUtc_ {};
      };

      virtual bool empty() const override { return this->agenticSpace_ == nullptr; };
      // agenticSpace Field Functions 
      bool hasAgenticSpace() const { return this->agenticSpace_ != nullptr;};
      void deleteAgenticSpace() { this->agenticSpace_ = nullptr;};
      inline const vector<AgenticSpaces::AgenticSpace> & getAgenticSpace() const { DARABONBA_PTR_GET_CONST(agenticSpace_, vector<AgenticSpaces::AgenticSpace>) };
      inline vector<AgenticSpaces::AgenticSpace> getAgenticSpace() { DARABONBA_PTR_GET(agenticSpace_, vector<AgenticSpaces::AgenticSpace>) };
      inline AgenticSpaces& setAgenticSpace(const vector<AgenticSpaces::AgenticSpace> & agenticSpace) { DARABONBA_PTR_SET_VALUE(agenticSpace_, agenticSpace) };
      inline AgenticSpaces& setAgenticSpace(vector<AgenticSpaces::AgenticSpace> && agenticSpace) { DARABONBA_PTR_SET_RVALUE(agenticSpace_, agenticSpace) };


    protected:
      shared_ptr<vector<AgenticSpaces::AgenticSpace>> agenticSpace_ {};
    };

    virtual bool empty() const override { return this->agenticSpaces_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // agenticSpaces Field Functions 
    bool hasAgenticSpaces() const { return this->agenticSpaces_ != nullptr;};
    void deleteAgenticSpaces() { this->agenticSpaces_ = nullptr;};
    inline const DescribeAgenticSpacesResponseBody::AgenticSpaces & getAgenticSpaces() const { DARABONBA_PTR_GET_CONST(agenticSpaces_, DescribeAgenticSpacesResponseBody::AgenticSpaces) };
    inline DescribeAgenticSpacesResponseBody::AgenticSpaces getAgenticSpaces() { DARABONBA_PTR_GET(agenticSpaces_, DescribeAgenticSpacesResponseBody::AgenticSpaces) };
    inline DescribeAgenticSpacesResponseBody& setAgenticSpaces(const DescribeAgenticSpacesResponseBody::AgenticSpaces & agenticSpaces) { DARABONBA_PTR_SET_VALUE(agenticSpaces_, agenticSpaces) };
    inline DescribeAgenticSpacesResponseBody& setAgenticSpaces(DescribeAgenticSpacesResponseBody::AgenticSpaces && agenticSpaces) { DARABONBA_PTR_SET_RVALUE(agenticSpaces_, agenticSpaces) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAgenticSpacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticSpacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAgenticSpacesResponseBody::AgenticSpaces> agenticSpaces_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
